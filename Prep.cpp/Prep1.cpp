// #include <iostream>
// using namespace std;

// int main()
// {
//  int a,b;
//  cin >> a>>b;
//  if (a > 0)
//  {
//   cout << "a is +" << endl;
//  }
//  else
//  {
//   if(a<0){
//    cout<<"a is -"<<endl;
//   }
//   else{
//    cout << "a is 0" << endl;
//   }
//  }
// }
//
// {
//  int n;
//  cin >>n;
//   int i=2;
//   while(i<n)
//  int i=2,sum=0;
//  while(i<=n){
//  sum=i+sum;
//  i=i+2;
//  }
//  cout << sum << " ";
// }
// {
//  int n;
//  cin >>n;
//   int i=2;
//   while(i<n){
//   if(n%i==0){
//    // i=i+1;
//    cout << " NOn prime for"<< i << endl;
//   }
//   else{
//    cout << "prime"<< i << endl;
//   }
//   i = i + 1;
//   }

// }
// {
//   int n;
//   cin >>n;
//    int i=1;
//    while(i<=n){
//     int j =1;
//     while(j<=n){
//      cout<< i;
//      j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//    }

// }
// C=(F-32)*5/9
// {
//  float C;
//  cin>>C;
//  float F=C*9.0/5+32;
//  cout<<"Temp in celsius"<<F<<endl;
//  return 0;
// }

// #include <iostream>
//     using namespace std;

// int main()
// {
//  int n;
//  cin >> n;
//  int i = 1;
//  while (i <= n)
//  {
//   int j = 1;
//   while(j<=n){
//   cout << n-j+1;
//   j = j + 1;
//  }
//  cout << endl;
//  i = i + 1;
// }
// }

// {
//  int n;
//   cin >> n;
//   int i = 1;
//    int count =1;
//   while (i <= n)
//   {
//    int j = 1;
//    while(j<=n){
//    cout << count<<" ";
//    count = count +1;
//    j = j + 1;
//   }
//   cout << endl;
//   i = i + 1;
//  }
// }

// {
//  int n;
//  cin >> n;
//  int row=1;
//  while(row<=n){
//   int col=1;
//   char value = 'A' + n - row;
//   while(col<=row){
//    // char ch = 'A' + row - 1;
//    cout << value;
//    value = value+1;
//    col = col + 1;
//  }
//  cout<<endl;
//  row=row+1;
// }
// }

// {
//  int n;
//  cin >> n;
//  int i = 1;

//  while (i <= n)
//  {
//   int j = 1;
//   while (j <= n-i+1)
//   {
// char ch = 'A' + j + i - 2;
//    cout <<"*";

//    j = j + 1;
//   }
//   cout << endl;
//   i = i + 1;
//  }
// }

// {
//  int n;
//  cin>>n;
//  int row = 1 , count=1;
//  while(row<=n){
//   // printing space first
//   int space = 1,col=1;
//   while(space<n-row){
//    cout<<" ";
//    space=space+1;
//   }
// star printing
// int col = 1;
// int count = 1;
//  while(col<=row){
//   cout<<count<<" ";
//   count=count+1;
//   col=col+1;
//  }
//  row = row + 1;
//  cout<<endl;

//  }
// }
// {
//  int n;
//  cin>>n;
//  int row=1;
//  while(row<=n){
//   // Space printing
//   int space = n-row;
//   while(space){
//    cout<<" ";
//    space=space-1;
//   }
// 1st triangle printing
// int j=1;
// while(j<=row){
//  cout<<j;
//  j=j+1;
// }
// print third triangle
//   int start = row-1;
//   while(start){
//    cout<<start;
//    start=start-1;
//   }
//   row=row+1;
// cout<<endl;

//  }

// }

//
// {
//   int n;
//   cout<<"Enter the values of n"<<endl;
//   cin>>n;
//   int sum =0;
//   for(int i=1;i<=n;i++){
//     sum +=i;
//   }
//   cout<<sum<<endl;
// }
//  {
//   int n=10;
//   int a=0;
//   int b=1;
//   for(int i=1;i<=n;i++){
//     int nextN=a+b;
//     cout<<nextN<<endl;
//     a=b;
//     b=nextN;
//   }
//  }

// {
// int n;
//  cout<<"Enter the value of n"<<endl;
// cin>>n;

//  for(int i=2;i<n;i++){
//   cout<<"Not a prime number"<<endl;
//   if
//  }

// for(int i=0;i<=15;i += 2){
//   cout<< i << " ";
//   if(i&1){
//     continue;
//   }
//   i++;
// }

// }

// {
//    int a , b;
//    cout<<"ENter the value of a"<<endl;
//    cin>>a;

//    cout << "ENter the value of b" << endl;
//    cin >> b;

//    char op;
//    cout<<"Enter the operation you want to perform"<<endl;
//    cin>> op;
//    switch(op){
//     case '+': cout<<(a+b)<<endl;
//               break;

//     case '-':cout<<(a+b)<<endl;
//               break;

//     case '*':
//               cout << (a + b) << endl;
//               break;

//     case '/':
//               cout << (a + b) << endl;
//               break;

//     case '%':
//               cout << (a + b) << endl;
//               break;
//     default: cout<<"Please enter the valid number"<<endl;
//    }
//    return 0;
// }

// {
//   int num;
//   cout<<"Enter the number here"<<endl;
//   cin>>num;

// int Rs100,Rs50,Rs20,Rs1;
// char x,y,z,a;
// cout<<"Enter the number here"<<endl;
// cout<<num;

//   switch(1){
//     case 1:Rs100=num/100;
//              num=num%100;
//              cout<<"No of 100 Rupees = "<<Rs100<<endl;

//     case 2:
//              Rs50 = num/50;
//              num = num%50;
//              cout << "No of 50 Rupees = " << Rs50 << endl;
//     case 3:
//           Rs20 = num/20;
//              num = num%20;
//              cout << "No of 20 Rupees = " << Rs20 << endl;
//     case 4:
//              Rs1= num/1;
//              num = num%1;
//              cout << "No of 1 Rupees = " << Rs1 << endl;
//   }
// }

// #include <iostream>
// #include<math.h>
// #include<climits>
// #include<bits/stdc++.h>
// using namespace std;

// bool iseven(int a){
//   if(a&1){
//     return 0;
//   }
//   return 1;
// }

// int main(){
//   int num;
//   cin>>num;

//   if(iseven(num)){
//     cout<<"Number is even"<<endl;
//   }
//   else{
//     cout<<"Number is odd"<<endl;
//   }
// }

// int factorial(int n){
//   int fact = 1;
//   for(int i= 1;i<=n;i++){
//     fact = fact * i;
//   }
//   return fact;
// }

// int nCr(int n,int r){
//     int num = factorial(n);
//     int denom = factorial(r) * factorial(n-r);
//   return num/denom;
// }

// int main(){
//   int n,r;
//   cin>>n>>r;
//   cout<<"Answer is"<<nCr(n,r)<<endl;
// }

// void printCounting(int n){
//   for(int i=0;i<=n;i++){
//   cout<<i<<endl;
//   }
// }

// int main(){
//   int n;
//   cin>>n;

//  printCounting(n);
//  return 0;
// }

// bool isPrime(int n){
//   for(int i=2;i<n;i++){

//     if(n%i == 0){
//      return 0;
//     }
//   }
//   return 1;
// }

// int main(){
//   int n;
//   cin>>n;
//  if(isPrime(n)){
//   cout<<"is a prime number"<<endl;
//  }
//  else{
//   cout<<"not a prime number"<<endl;
//  }
//  return 0;
// }

// int sum(int n){

//   return (3*n+7);
// }

// int main(){
// int n;
// cout<<"enter the number ";
// cin>>n;

// cout<<sum(n)<<endl;
// return 0;
// }

// void fibo(int n){
//   int a=0,b=1;
//   // if(n==1){
//   //   return 0;
//   // }
//   // else if(n==2){
//   //   return (a+b);

//   // }
//   for(int i=0;i<=n;i++){
//     int next_number =a+b;
//     cout<<next_number<<" ";
//     a = b;
//     b= next_number;
//   }
//   return ;
// }

// int main(){
//   int n;
//   cout<<"enter the n";
//   cin>>n;
//   fibo(n);

// }

// int bitConverter(int n){
//   int i =0;
//   int ans = 0 ;
//   while(n!=0){
//     int bit = n&1;
//     ans = ans +bit*pow(10,i);
//     n>>1;
//     i+i+1;
//   }
//  return ans;
// }

// int BitCounter(int n)
// {
//  int num = bitConverter(n);
//  int ans = 0;
//  while (num != 0)
//  {
//     int digit =  num%10;
//     if(digit == 1){
//     ans = ans + digit;
//     }
//    num = num/10;
//  }
//  return ans;
// }

// int main(){
//   int a,b;
//   cout<<"Enter the value of A abd B"<<endl;
//   cin>>a;
//   cin>>b;
//   int answer = BitCounter(a)+BitCounter(b);
//   cout<<answer;
// }

// working for bits

// int CountingBits(int n){
//   int count = 0;
//   while(n!=0){
//     if(n&1){
//       count++;
//     }
//     n=n>>1;

//   }
//   return count;
// }

// int main(){
//   int a,b;
//   cin>>a>>b;
//   cout<<"total number pof bit s"<<CountingBits(a)+CountingBits(b)<<endl;
//   return 0;
// }

// int update(int a){
//  int ans = a*a;
//  return ans;

// }

// int main(){
//   int a =14;
//   a= update(a);
// only changes when functions assigning
//   cout<< a << endl;
// }

// int getMin(int num[],int n){
//   int min = INT_MAX;
//   for(int i=0;i<n;i++){
//       if(num[i]<min){
//         min = num[i];
//       }
//   }
//   return min;
// }

// int getMax(int num[], int n)
// {
//   int max = INT_MIN;
//   for (int i = 0; i < n; i++)
//   {
//       if (num[i] < max)
//       {
//         max = num[i];
//       }
//   }
//   return max;
// }

// int main(){
//   int size;
//   cin>>size;

//   int num[100];
//   for(int i=0;i<size;i++){
//     cin>>num[i];
//   }
//   cout<<"Maximum value is "<<getMax(num,size) <<endl;
//   cout << "Minimum value is " << getMin(num, size) << endl;
//   return 0;
// }

// #include <iostream>
// #include <math.h>
// #include <climits>
// #include <bits/stdc++.h>
// using namespace std;
// int sumArray(int a[],int n){
//   int sum =0;
//   for(int i=0;i<n;i++){
//     sum = sum+a[i];
//   }
//   return sum;
// }

// int main(){
//   // taking the size of array
//   int a[5],n;
//   cin>>n;
//   // Taking the array from user
//   for(int i=0;i<n;i++){
//     cin>>a[i];
//   }
//  cout <<"total sum of array "<<sumArray(a,n)<<endl;
// }

// rever the string

// void reverse(int arr[],int n){
//   int start = 0;
//   int end = n-1;

//   while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//   }
// }

// void printArray(int arr[],int n){
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";

//   }
//   cout<<endl;
// }

// int main(){

//   int arr[6]={1,4,5,-8,3,7};
//   int brr[5]={3,4,5,7,8};

//   reverse(arr,6);
//   reverse(brr,5);

//   printArray(arr,6);
//   printArray(brr,5);
// }

// Swap alternate element pbm

// void printArray(int arr[],int size){
//   for(int i =0;i<size;i++){
//       cout<<arr[i]<<" ";
//   }cout<<endl;
// }

// void Alternate(int arr[],int size){
//   for(int i=0;i<size;i+=2){
//     if(i+1<size){
//       swap(arr[i],arr[i+1]);
//     }
//   }
// }

// int main(){
//   int even[8]={5,3,8,7,23,67,87,98};
//   int odd[4]={45,76,87,32};

//   Alternate(even,8);
//   printArray(even,8);

//   Alternate(odd, 4);
//   printArray(odd, 4);
// }

// Find unique in array code studio

//  Binary search
// int binarySearch(int arr[], int size, int key)
// {
//   int start = 0;
//   int end = size - 1;

//   int mid = (start + end) / 2;

//   while (start <= end)
//   {
//     if (arr[mid] == key)
//     {
//       return mid;
//     }
//     if (key > arr[mid])
//     {
//       start = mid + 1;
//     }
//     else
//     {
//       end = mid - 1;
//     }
//     mid = (end + start) / 2;
//   }
//   return -1;
// }

// int main()
// {
//   int even[6] = {2, 4, 6, 8, 12, 18};
//   int odd[5] = {3, 8, 11, 27, 34};

//   int evenindex = binarySearch(even, 6, 8);
//   cout << "Index of this is" << evenindex << endl;

//   int oddindex = binarySearch(odd, 5, 27);
//   cout << "Index of this is" << oddindex << endl;

//   return 0;
// }

// First &  last element in sorted arry

// int main()
// {
//  int even[5] = {1, 2, 3, 3, 5};
//  cout << firstOcc(even, 5, 3) << endl;
//  cout << lastOcc(even, 5, 3) << endl;

//  return 0;
// }

// FInd pivot in an array

// int getPivot(int arr[], int n)
// {
//  int s = 0;
//  int e = n - 1;
//  int mid = s + (e - s) / 2;

//  while (s < e)
//  {
//   if (arr[mid] >= arr[0])
//   {
//    s = mid + 1;
//   }
//   else
//   {
//    e = mid;
//   }
//   mid = s + (e - s) / 2;
//  }
//  return s;
// }

// int main()
// {
//  int arr[5] = {8, 10, 17, 1, 3};
//  cout << "pivot is" << getPivot(arr, 5) << endl;
// }

// for getting perfect square root of a number with decimal values
// #include <iostream>
// #include <math.h>
// #include <climits>
// #include <bits/stdc++.h>
// using namespace std;

// long long int sqrtInteger(int n)
// {
//  int s = 0;
//  int e = n;
//  long long int mid = s + (e - s) / 2;
//  long long int ans = -1;
//  while (s <= e)
//  {
//   long long int square = mid * mid;
//   if (square == n)
//    return mid;

//   if (square < n)
//   {
//    ans = mid;
//    s = mid + 1;
//   }
//   else
//   {
//    e = mid - 1;
//   }
//   mid = s + (e - s) / 2;
//  }
//  return ans;
// }

// double morePrecision(int n, int precision, int tempSol)
// {
//  double factor = 1;
//  double ans = tempSol;
//  for (int i = 0; i < precision; i++)
//  {
//   factor = factor / 10;
//   for (double j = ans; j * j < n; j = j + factor)
//   {
//    ans = j;
//   }
//  }
//  return ans;
// }

// int main()
// {
//  int n;
//  cout << "Enter the number " << endl;
//  cin >> n;

//  int tempSol = sqrtInteger(n);
//  cout << "Answer is " << morePrecision(n, 3, tempSol) << endl;
//  return 0;
// }

// Reverse the array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// vector<int> reverse(vector<int> v){
//     int s= 0, e=v.size()-1;

//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

// void print(vector<int> v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);

//     vector<int> ans = reverse(v);
//     print (ans); 
//     return 0;
// }

// merge sorted array

// void merge(int arr1[],int n,int arr2[],int m ,int arr3[]){
//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k++]=arr1[i++];
//         }
//         else{
//             arr3[k++]=arr2[j++];
//         }
//     }
    // copy first k element 
    // while(i<n){
    //     arr3[k++]=arr1[i++];
    // }

    // copy second arrY ELEMENTS remaining
//     while (j<m){
//         arr2[k++] = arr2[j]++;
//     }

// }

// void print(int ans[],int n){
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr1[5] = {1,3,5,7,9};
//     int arr2[3]={2,4,6};

//     int arr3[8]={0};

//     merge(arr1,5,arr2,3,arr3);
//     print(arr3,8);

//     return 0;
// }

// moves zero to end 

//   length of string
// int getlength(char name[]){
//     int count = 0;
//     for(int i=0;name[i] != '\0';i++){
//         count++;
//     }
//     return count;
// }

// int main(){
//     char name[20];
//     cin>>name;
//     cout<<"length:"<<getlength(name)<<endl;
//     return 0;
// }

// maximun occuring character
// char getMaxOccchar(string s){
//     int arr[26]={0};

    // create an array of count char

    // for(int i=0;i<s.length();i++){
    //     char ch = s[i];
         
        // lowercase
        // int number = 0;
        // if(ch>='a' && ch<='z'){
        //     number = ch-'a';

        // }
        // uppercase
        // else{
        //     number = ch-'A';
        // }
//         arr[number]++;
//     }

//     int maxi = -1,ans =0;
//     for(int i=0;i<26;i++){
//         if(maxi < arr[i]){
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     char finalAns = 'a'+ans;
//     return finalAns;
// }

// int main(){
//     string s;
//     cin>>s;

//     cout<<getMaxOccchar(s)<<endl;
//     return 0;
// }