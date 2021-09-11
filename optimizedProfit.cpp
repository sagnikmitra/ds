#include<bits/stdc++.h>
using namespace std;
int profit(int input1, int input2[], int input3[], int input4, int input5){
	sort(input2, input2.size());
	sort(input3, input3.size());
	int profit = 0;
	for(int i =0; i<input4; i++){
		profit += input2[input2.size()-i-1];
	}
	for(int i =0; i<input5; i++){
		profit += input3[input2.size()-i-1];
	}
	int rem = input4 + input5 - input1;
	int arr[input4+input5];
	for(int i =0; i<input4; i++){
		arr.push_back(input2[input2.size()-i-1]);
	}
	for(int i =0; i<input5; i++){
		arr.push_back(input3[input2.size()-i-1]);
	}
	int profit = 0;
	for(int j = rem; j<arr.size(); j++){
		profit += arr[j];
	}
	return profit;
	
}
int main(){
    int input1, int input4, int input5;
    cin>>input1;
    int input2[input1], int input3[input1]; 
    for(int i=0; i<input1; i++){
        cin>>input2[i];
    }
    for(int i=0; i<input1; i++){
        cin>>input3[i];
    }
    cin>>input4;
    cin>>input5;
    cout<<(input1, input2, input3, input4, input5)<<endl;
}