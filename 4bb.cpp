#include <iostream>
    using namespace std;

    int main() {
        int n, m, q;
        cout<<"Enter the sizes of the first matrix: ";
        cin>>n>>m;
        cout<<"Enter the second dimension of the second matrix: ";
        cin>>q;
        int arr[n][m], brr[m][q], res[n][q];

        cout<<"Enter the elements of the first matrix: ";
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin>>arr[i][j];} }

        cout<<"Enter the elements of the second matrix: ";
        for(int i=0; i<m; i++) {
            for(int j=0; j<q; j++) {
                cin>>brr[i][j]; }}
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<q; j++) {
                res[i][j] = 0;
                for(int k=0; k<m; k++) {
                    res[i][j] += arr[i][k] * brr[k][j]; }} }

        for(int i=0; i<n; i++) {
            for(int j=0; j<q; j++) {
                cout<<res[i][j]<<" "; }
            cout<<endl;}

        return 0; }