 #include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

char key[20];
int encrypt();
int decrypt();
int main()
{
	int choice;
	cout<<"Enter the key for Vignere cipher"<<endl;
	cin>>key;
	cout<<"Enter the choice: 1 for Encryption and 0 for Decryption"<<endl;
	cin>>choice;
	if(choice==1)
	encrypt();
	else if(choice==0)
	decrypt();
	return 0;
	
}
void encrypt()
{
	char abc[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char input[40], output[40]={" "};
	cout<<"Enter the string:"<<endl;
	cin>>input;
	int len= strlen(input);
	int keylen= strlen(key);
	int i=0, j=0;
	while(i<len)
	{
		if(j==keylen)
		j=o;
		int pres= input[i] - 97;
		int keypres= key[j] - 97;
		output[i]= abc[(pres+keypres) % 26];
		i++; j++;
	}
	cout<<output;
}
	void decrypt()
	{
		char abc[]={'a,'b,'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		char input[40], output[40]={" "};
	cout<<"Enter the string:"<<endl;
	cin>>input;
	int len= strlen(input);
	int keylen= strlen(key);
	int i=0, j=0;
	while(i<len)
	{
		if(j==keylen)
		j=o;
		int pres= input[i] - 97;
		int keypres= key[j] - 97;
		int l=(pres-keypres);
		if(l<0)
		l+=26;
		output[i]= abc[l];
		i++; j++;
		
	}
	cout<<output;
	
	
}
