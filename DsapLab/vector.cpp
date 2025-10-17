#include<bits/stdc++.h>
using namespace std;
void oneDVector(){
    //creating 1d vector
    int n ;
    cin >> n;
    vector<int> a;

    //taking user input 
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    //printing
    for(int val : a){
        cout << val << " ";
    }
    cout <<endl;

}

void twoDVector(){

    int rows, cols;
    // --- 2. Get dimensions from the user ---
     cout << "Enter the number of rows: ";
     cin >> rows;

     cout << "Enter the number of columns: ";
     cin >> cols;

    // --- 3. Declare the 2D vector ---
    // This creates a vector of vectors of integers.
    // We can think of it as a dynamic 2D array.
     vector< vector<int>> matrix;

    // --- 4. Take input for each element ---
     cout << "Enter the elements of the matrix:" <<  endl;

    // Outer loop iterates through each row
    for (int i = 0; i < rows; ++i) {
        // For each row, create a temporary 1D vector to hold its elements
         vector<int> currentRow;
        
        // Inner loop iterates through each column in the current row
        for (int j = 0; j < cols; ++j) {
            int element;
             cin >> element;
            // Add the entered element to the current row's vector
            currentRow.push_back(element);
        }
        
        // Add the completed row vector to the main 2D vector (the matrix)
        matrix.push_back(currentRow);
    }

    // --- 5. Print the 2D vector to verify ---
     cout << "\nThe 2D vector you entered is:" <<  endl;
    
    // Outer loop iterates through each row vector in the matrix
    for (int i = 0; i < matrix.size(); ++i) {
        // Inner loop iterates through each element in the current row vector
        for (int j = 0; j < matrix[i].size(); ++j) {
             cout << matrix[i][j] << " ";
        }
        // Print a newline character after each row for better formatting
         cout <<  endl;
    }
    

}

int main(){
    twoDVector();
    return 0;
}