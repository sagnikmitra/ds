#include<iostream>
#include<malloc.h>
using namespace std;
//returns the index of a state in states that is in Q
int getRow(int state /*state in question*/, int* states /*Q*/, int q/*length of Q*/)
{
	int i = 0;
	for(i = 0; i<q;i++)
	{
		if(states[i] == state)
			return i;
	}
	return -1;
}
//Returns the index of an input in an sigma
int getCol(int input/*input in question*/, int* inputs/*set of inputs or Sigma*/, int sizeOfInputs)
{
	int i = 0;
	for(i = 0; i<sizeOfInputs; i++)
	{
		if(inputs[i] == input)
			return i;
	}
	return -1;
}
//checks whether a state is a final state or not
//returns 0 if yes, 1 otherwise
int isFinal(int state/* state in question*/, int* finals /* final states */, int sizeOfFinal)
{
	int i = 0;
	for(i = 0; i<sizeOfFinal;i++)
	{
		if(finals[i] == state)
			return 0;
	}
	return 1;
}
int main()
{
	int q,input,fs,init;
	int *states,*inputs,*finals;
	int **trans;
	int i,j;
	int inputStr;
	int* inputStrArr;
	int presentState;
	int nextState;
	int count;
	int currRow;
	int currCol;

	cout<<"\nHOW MANY STATES : ";
	cin>>q;
	//allocating memory to hold all the states
	states=(int *)malloc(q*sizeof(int));

	cout<<"\nENTER THE STATES : ";
	for(i=0;i<q;i++)
		cin>>states[i];

	cout<<"\nHOW MANY INPUTS : ";
	cin>>input;

	//allocating memory to hold all the inputs
	inputs=(int*)malloc(input*sizeof(int));

	cout<<"\nENTER THE INPUTS : ";
	for(i=0;i<input;i++)
		cin>>inputs[i];

	cout<<"\nENTER THE INITIAL STATE : ";
	cin>>init;

	cout<<"\nHOW MANY FINAL STATES ; ";
	cin>>fs;

	//allocating memory to hold all the final states
	finals=(int *)malloc(fs*sizeof(int));
	cout<<"\nENTER THE FINAL STATES : ";
	for(i=0;i<fs;i++)
		cin>>finals[i];

	//allocating memory for transition table of size q x input
	trans=(int **)malloc(q*sizeof(int *));
	for(i=0;i<q;i++)
		trans[i]=(int *)malloc(input*sizeof(int));

	for(i=0;i<q;i++)
	{
		for(j=0;j<input;j++)
		{
			cout<<"\nENTER THE NEXT STATE FOR DEL "<<states[i]<<" , "<<inputs[j]<<" : ";
			cin>>trans[i][j];
		}
	}
	//output section
	cout<<"\n\nTHE INPUT AUTOMATA LOOKS LIKE BELOW : \n";
	cout<<"M = {";
	for(i=0;i<q;i++)
	{
		if(i<=q-2)
			cout<<states[i]<<",";
		else
			cout<<states[i];
	}
	cout<<"},{";
	for(i=0;i<input;i++)
	{
		if(i<=input-2)
			cout<<inputs[i]<<",";
		else
			cout<<inputs[i];
	}
	cout<<"}, DEL,"<<init<<",{";
	for(i=0;i<fs;i++)
	{
		if(i<=fs-2)
			cout<<finals[i]<<",";
		else
			cout<<finals[i];
	}
	cout<<"}} WHERE DEL LOOKS LIKE BELOW..\n";
	for(i=0;i<input;i++)
	{
		cout<<"\t"<<inputs[i];
	}
	cout<<"\n......................................................\n";

	for(i=0;i<q;i++)
	{
		cout<<states[i]<<"\t";
		for(j=0;j<input;j++)
		{
			cout<<trans[i][j]<<"\t";
		}
		cout<<endl;
	}
	//output section ends


	cout<<"\n Size of Input String:";
	cin>>inputStr;
	//allocating memory for input string
	inputStrArr = (int*)malloc(inputStr*sizeof(int));


	cout<<"Input the string:";
	for(i = 0; i<inputStr; i++)
		cin>>inputStrArr[i];

	presentState = init; //automata will start from init state
	count = 0;
	cout<<presentState;
	while(count<inputStr) // for the entire input string
	{
	   cout<<"-->";
	   currRow = getRow(presentState, states,q); // to get the row position of transition table
	   currCol = getCol(inputStrArr[count], inputs, input);//to get the column position of transition table
	   nextState = trans[currRow][currCol];//computing the next state
	   count = count + 1;
	   cout<<nextState;
	   presentState = nextState; //for next turn the prsent next state will be future present state

	}
	//after all the inputs are consumed

	if( isFinal(nextState, finals,fs) == 0)//if the automata ends with a final state
		cout<<"\n Yes it accepts";
	else
		cout<<"\n No it does not accept";
	return 0;

}
