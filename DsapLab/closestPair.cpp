#include<bits/stdc++.h>
using namespace std;

double distance(const vector<double>& p1, const vector<double>& p2) {
    return sqrt((p1[0] - p2[0]) * (p1[0] - p2[0]) +
                (p1[1] - p2[1]) * (p1[1] - p2[1]));
}

// Comparison function to sort points by x-coordinate
bool compareX(const vector<double> &p1, const vector<double> &p2){  
    return p1[0] < p2[0];
}

// Comparison function to sort points by Y-coordinate
bool compareY(const vector<double> &p1, const vector<double> &p2){
    return p1[1] < p2[1];
}

double stripClosest(vector<vector<double>>& strip, double d) {
    double minDist = d;

    // Sort points in the strip by their y-coordinate
    sort(strip.begin(), strip.end(), compareY);

    // Compare each point in the strip
    for (int i = 0; i < strip.size(); ++i) {
        
        // At most 7 times this will run
        for (int j = i + 1; j < strip.size() &&
                    (strip[j][1] - strip[i][1]) < minDist; ++j) {
            minDist = min(minDist, distance(strip[i], strip[j]));
        }
    }

    return minDist;
}

// Divide and conquer function to find the minimum distance
double minDistUtil(vector<vector<double>>& points, 
                                int left, int right) {
                           
    // Base case brute force for 2 or fewer points
    if (right - left <= 2) {
        double minDist = 1e9;
        for (int i = left; i < right; ++i) {
            for (int j = i + 1; j < right; ++j) {
                minDist = min(minDist, distance(points[i], points[j]));
            }
        }
        return minDist;
    }

    // Find the midpoint
    int mid = (left + right) / 2;
    double midX = points[mid][0];

    // Recursively find the minimum distances in
    // the left and right halves
    double dl = minDistUtil(points, left, mid);
    double dr = minDistUtil(points, mid, right);

    double d = min(dl, dr);

    // Build the strip of points within distance d from the midline

    vector<vector<double>> strip;
    for (int i = left; i < right; ++i) {
        if (abs(points[i][0] - midX) < d) {
            strip.push_back(points[i]);
        }
    }

    // Find the minimum distance in the strip
    double stripDist = stripClosest(strip, d);

    return min(d, stripDist);
}


double minDistance(vector<vector<double>>& points) {
    int n = points.size();

    // Sort points by x-coordinate
    sort(points.begin(), points.end(), compareX);

    return minDistUtil(points, 0, n);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << "Enter no. of points"<< endl;
    int n ;
    cin >> n;

    vector<vector<double>> points;
    for(int i=0; i<n; i++){
        vector<double> curr;
        for(int i=0; i<2; i++){
            int temp;
            cin >> temp;
            curr.push_back(temp);
        }
        points.push_back(curr);
    }

    double res = minDistance(points);

    for(auto i: points){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << fixed << setprecision(6) << res << endl;
    return 0;
}