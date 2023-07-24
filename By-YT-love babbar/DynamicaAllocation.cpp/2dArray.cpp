// for  row =col
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int** arr = new int*[n];
//     for(int i=0;i<n;i++){
//         arr[i] = new int[n];
//     }

    // creation is done

    // taking input
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // taking OUTPut
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";

//         }
//         cout<<endl;
//     }
//     return 0;
// }

// for row not equal to col

#include<iostream>
using namespace std;

int main(){

    int row;
    cin>>row;

    int col;
    cin>>col;

    int** arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    // creation  of 2D array is done

    // taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // taking OUTPut
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

    // releasing memory manully
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }

    delete []arr;
    return 0;
}