#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define pll pair<lli, lli>
#define X first
#define Y second

// ---------- Max Employees in Office ----------
int maxEmployee(vector<pair<lli, lli>> &times) {
    vector<pair<lli, int>> events;
    for (auto &p : times) {
        lli start = p.first;
        lli end = p.second;
        events.push_back({start, 1});  // arrival
        events.push_back({end, -1});   // leaving
    }
    sort(events.begin(), events.end());
    int cur = 0, mx = 0;
    for (auto &e : events) {
        cur += e.second;
        mx = max(mx, cur);
    }
    return mx;
}

// ---------------- H/V Segment Intersections ----------------
struct Event {
    lli x, y1, y2, type; // type: 1=start H, 2=end H, 3=V
    bool operator<(const Event &other) const { return x < other.x; }
};

int countIntersections(vector<tuple<lli, lli, lli, lli>> &segments) {
    vector<Event> events;
    for (auto &seg : segments) {
        lli x1 = get<0>(seg);
        lli y1 = get<1>(seg);
        lli x2 = get<2>(seg);
        lli y2 = get<3>(seg);
        if (y1 == y2) { // horizontal
            events.push_back({min(x1, x2), y1, y1, 1});
            events.push_back({max(x1, x2), y1, y1, 2});
        } else { // vertical
            events.push_back({x1, min(y1, y2), max(y1, y2), 3});
        }
    }
    sort(events.begin(), events.end());
    set<lli> active;
    int res = 0;
    for (auto &e : events) {
        if (e.type == 1) active.insert(e.y1);
        else if (e.type == 2) active.erase(e.y1);
        else {
            res += distance(active.lower_bound(e.y1), active.upper_bound(e.y2));
        }
    }
    return res;
}

// ---------------- Closest Pair of Points ----------------
double dist(pll a, pll b) {
    return sqrt((a.X - b.X) * (a.X - b.X) + (a.Y - b.Y) * (a.Y - b.Y));
}

double closestPair(vector<pll> &pts) {
    sort(pts.begin(), pts.end());
    set<pll> active;
    double d = 1e18;
    int l = 0;
    for (int i = 0; i < (int)pts.size(); i++) {
        while (l < i && pts[i].X - pts[l].X > d) {
            active.erase({pts[l].Y, pts[l].X});
            l++;
        }
        auto it1 = active.lower_bound({(lli)floor(pts[i].Y - d), -1e18});
        auto it2 = active.upper_bound({(lli)ceil(pts[i].Y + d), 1e18});
        for (auto it = it1; it != it2; ++it) {
            d = min(d, dist(pts[i], {it->Y, it->X}));
        }
        active.insert({pts[i].Y, pts[i].X});
    }
    return d;
}

// ---------------- Convex Hull (Andrew's Algorithm) ----------------
lli cross(pll O, pll A, pll B) {
    return (A.X - O.X) * (B.Y - O.Y) - (A.Y - O.Y) * (B.X - O.X);
}

vector<pll> convexHull(vector<pll> P) {
    int n = P.size(), k = 0;
    sort(P.begin(), P.end());
    vector<pll> H(2 * n);

    // Lower hull
    for (int i = 0; i < n; i++) {
        while (k >= 2 && cross(H[k - 2], H[k - 1], P[i]) <= 0) k--;
        H[k++] = P[i];
    }

    // Upper hull
    for (int i = n - 2, t = k + 1; i >= 0; i--) {
        while (k >= t && cross(H[k - 2], H[k - 1], P[i]) <= 0) k--;
        H[k++] = P[i];
    }

    H.resize(k - 1);
    return H;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Example: Max employees
    vector<pair<lli, lli>> times = {{10,15},{6,12},{14,16},{5,13}};
    cout << "Max employees at same time: " << maxEmployee(times) << "\n";

    // Example: Closest pair
    vector<pll> points = {{1,1},{4,5},{7,2},{2,6}};
    cout << "Closest pair distance: " << closestPair(points) << "\n";

    // Example: Convex hull
    vector<pll> pts = {{0,0},{1,1},{2,2},{0,2},{2,0}};
    auto hull = convexHull(pts);
    cout << "Convex hull points:\n";
    for (auto p : hull) cout << "(" << p.X << "," << p.Y << ")\n";

    return 0;
}