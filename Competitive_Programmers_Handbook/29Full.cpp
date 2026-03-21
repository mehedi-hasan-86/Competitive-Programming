#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<long long>;
using vi = vector<int>;

typedef long double C;          // Use long double for precision
typedef complex<C> P;           // Complex number as point/vector
#define X real()
#define Y imag()

const long double EPS = 1e-9;

// ============ Geometry Utilities ===========

// Euclidean distance
long double distance(P a, P b) {
    return abs(b - a);
}

// Cross product a x b
C cross(P a, P b) {
    return (conj(a) * b).Y;
}

// Dot product a · b
C dot(P a, P b) {
    return (conj(a) * b).X;
}

// Rotate vector counterclockwise by angle radians
P rotate(P v, long double angle) {
    return v * polar(1.0L, angle);
}

// ============ Line / Segment ==============

// Distance from point p to line segment s1-s2
long double pointLineDistance(P p, P s1, P s2) {
    long double len = abs(s2 - s1);
    if (len < EPS) return abs(p - s1);
    long double area = abs(cross(s2 - s1, p - s1));
    return area / len;
}

// Check if point p is on segment s1-s2
bool onSegment(P p, P s1, P s2) {
    return abs(cross(s2 - s1, p - s1)) < EPS && dot(p - s1, p - s2) <= 0;
}

// Check if segments a-b and c-d intersect
bool segmentsIntersect(P a, P b, P c, P d) {
    C d1 = cross(b - a, c - a);
    C d2 = cross(b - a, d - a);
    C d3 = cross(d - c, a - c);
    C d4 = cross(d - c, b - c);

    if (((d1 > EPS && d2 < -EPS) || (d1 < -EPS && d2 > EPS)) &&
        ((d3 > EPS && d4 < -EPS) || (d3 < -EPS && d4 > EPS)))
        return true;

    // Collinear cases
    if (abs(d1) < EPS && onSegment(c, a, b)) return true;
    if (abs(d2) < EPS && onSegment(d, a, b)) return true;
    if (abs(d3) < EPS && onSegment(a, c, d)) return true;
    if (abs(d4) < EPS && onSegment(b, c, d)) return true;

    return false;
}

// ================= Polygon =================

// Polygon area (Shoelace formula)
long double polygonArea(vector<P> &poly) {
    C area = 0;
    int n = sz(poly);
    for (int i = 0; i < n; i++) {
        area += cross(poly[i], poly[(i + 1) % n]);
    }
    return abs(area) / 2.0L;
}

// Point inside polygon (Ray Casting method)
bool pointInsidePolygon(P p, vector<P> &poly) {
    int n = sz(poly);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        P a = poly[i];
        P b = poly[(i + 1) % n];
        if (onSegment(p, a, b)) return true;
        if (a.Y > b.Y) swap(a, b);
        if (p.Y > a.Y && p.Y <= b.Y && cross(b - a, p - a) > EPS)
            cnt++;
    }
    return cnt % 2 == 1;
}

// Maximum Manhattan distance between points
C maxManhattanDistance(vector<P> &points) {
    C maxDist = 0;
    vector<pair<C, C>> rotated;
    for (auto p : points)
        rotated.push_back({p.X + p.Y, p.X - p.Y});

    C minX = LDBL_MAX, maxX = -LDBL_MAX;
    C minY = LDBL_MAX, maxY = -LDBL_MAX;

    for (auto p : rotated) {
        minX = min(minX, p.first);
        maxX = max(maxX, p.first);
        minY = min(minY, p.second);
        maxY = max(maxY, p.second);
    }

    maxDist = max(maxX - minX, maxY - minY);
    return maxDist;
}

// ================= Main ==================
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Polygon example
    vector<P> poly = {{4,1},{7,3},{5,5},{2,4},{4,3}};
    cout << "Polygon Area: " << polygonArea(poly) << "\n";

    // Point inside polygon
    P pt = {3,3};
    cout << "Point inside polygon? " << (pointInsidePolygon(pt, poly) ? "Yes" : "No") << "\n";

    // Distance between points
    P a = {4,2}, b = {3,-1};
    cout << "Distance between a and b: " << distance(a,b) << "\n";

    // Point-line distance
    P s1 = {0,0}, s2 = {4,4}, p = {3,0};
    cout << "Distance from p to line: " << pointLineDistance(p,s1,s2) << "\n";

    // Segment intersection
    P c = {0,4}, d = {4,0};
    cout << "Segments intersect? " << (segmentsIntersect(s1,s2,c,d) ? "Yes" : "No") << "\n";

    // Maximum Manhattan distance
    vector<P> pts = {{1,0},{3,3},{2,5},{0,2}};
    cout << "Maximum Manhattan distance: " << maxManhattanDistance(pts) << "\n";

    // Rotate vector example
    P v = {1,0};
    P r = rotate(v, M_PI/4); // rotate 45 degrees
    cout << "Rotated vector: (" << r.X << ", " << r.Y << ")\n";

    return 0;
}