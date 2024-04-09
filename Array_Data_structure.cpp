// // Reverse an array of integers
// #include<bits/stdc++.h>
// using namespace std;



// int main(){
     
//      int n;
//      cin >> n;
//      int arr[n];

//      for(int i=0; i< n; i++){
//         cin >> arr[i];

//      }
//      for(int i =n-1; i>=0; i--){ // first-(n-1) elemnet = 4-1 = 3(each iteration i--) then 3-1 =2 then 2-1 = 1 then 1-1 = 0
//         cout << arr[i] << " ";
//      }
// }

//using built in function reverse
// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     reverse(arr,arr+n);
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
// }

//uisng vector with array
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define endl "\n"
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


// int main(){
//     fast;
//     int n;
//     cin >> n;
//     vector<int> arr(n);  //vector<int> arr(n) = vector<int> arr(n,0) = vector<int> arr(n,1) = vector<int> arr(n,2) = vector<int> arr(n,3) = vector<int> arr(n,4) = vector<int> arr(n,5) = vector<int> arr(n,6) = vector<int> arr(n,7) = vector<int> arr(n,8) = vector<int> arr(n,9) = vector<int> arr(n,10) = vector<int> arr(n,11) = vector<int> arr(n,12) = vector<int> arr(n,13) = vector<int> arr(n,14) = vector<int> arr(n,15) = vector<int> arr(n,16) = vector<int> arr(n,17) = vector<int> arr(n,18) = vector<int> arr(n,19) = vector<int> arr(n,20) = vector<int> arr(n,21) = vector<int> arr(n,22) = vector<int> arr(n,23) = vector<int> arr(n,24) = vector<int> arr(n,25) = vector<int> arr(n,26) = vector<int> arr(n,27) = vector<int> arr(n,28) = vector<int> arr(n,29) = vector<int> arr(n,30) = vector<int> arr(n,31) = vector<int> arr(n,32) = vector<int> arr(n,33) = vector<int> arr(n,34) = vector<int> arr(n,35) = vector<int> arr(n,36) = vector<int> arr(n,37) = vector<int> arr(n,38) = vector<int> arr(n,39) = vector<int> arr(n,40) = vector<int> arr(n,41) = vector<int> arr(n,42) = vector<int> arr(n,43) = vector<int> arr(n,44) = vector<int> arr(n,45) = vector<int> arr(n,46) = vector<int> arr(n,47) = vector<int> arr(n,48) = vector<int> arr(n,49) = vector<int> arr(n,50) = vector<int> arr(n,51) = vector<int> arr(n,52) = vector<int> arr(n,53) = vector<int> arr(n
//     for(int i = 0; i< n; i++){
//         cin >> arr[i];
//     }
//     reverse(arr.begin(), arr.end());
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
        
//     }
// }

//basics concept of array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3] = {1,2,3}; //= sizeof(arr)/ sizeof(arr[0]);
//     char a[3] = {'a','b','c'};
//     string s = "kire mama";  // s.size()
//     cout << s[1] << endl;
//     for(int i=0; i<s.size(); i++){
//         cout << s[i] << endl;
//     }

//     int size = sizeof(arr)/ sizeof(arr[0]);
//     cout << size << endl;

//     cout << a[0] << endl;
// }



//searcing element of array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int f;
    int key;
    int arr[] = {22, 33, 43, 55};  //43
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cin >> key;
    for(int i = 0; i<size; i++){
        if(arr[i] == key ){
            f = arr[i];
        }
        
    }
    if(f == 43){
    cout << "Found" << endl;
    }else{
        cout << "Not Found" << endl;
    }
}