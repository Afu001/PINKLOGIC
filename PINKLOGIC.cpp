#include <iostream>
#include <string>
using namespace std;
void decide();

//Powered By PINKLOGIC Derived by Khawaja Aswad Ul Husnain


void compliment1(int s1[10],int s2[10],int s3[10],int sizelen){
	int bcd[5] = {8,4,2,1};
	int bcd2[5] = {1,1,1,1};
	int bcd3[5] = {};
	string dec;
	int arrange[5];
	
	
	for(int i = 0; i < 1; i++){
		
		arrange[0] = s1[0];
		arrange[1] = s2[0];	
		arrange[2] = s3[0];	
}
	for(int k = 0; k < 4; k++){
			
		if(arrange[0] == bcd[k]){
			bcd2[k] = 0;
		}	
	}
	
	for(int z = 0; z < 4; z++){
			
		if(arrange[1] == bcd[z]){
			bcd2[z] = 0;
		}
		
		
	}
	
		for(int y = 0; y < 4; y++){
			
		if(arrange[2] == bcd[y]){
			bcd2[y] = 0;
		}
		
		
	}
		cout << "\n";
		for(int j = 0; j < sizelen - 1; j++){
			
			//cout <<bcd2[j] << " ";
			bcd3[j] = bcd2[j];
		}
		
		if(bcd2[3] == 0){
			bcd3[3] = 1;
	}
		if(bcd2[3] == 1){
			bcd3[3] = 0;
			
		} if(bcd3[3] == 0){
		
		if(bcd2[2] != 0){
			
		for(int i = 2; i >= 0; i--){
				
				if(bcd2[i] == 0){
					bcd3[i] = 1;
					break;
				}
			
		}}}
		cout << "\n";
		cout << "Now Converting to 2's Compliment! ...";
		cout << "\n" << "\n";
		cout <<"2's Compliment : ";
		for(int v = 0; v < 4; v++){	
			//cout <<bcd2[v] << " ";
			cout << bcd3[v] << " ";
		}
		
		cout << "\n" << "\n";
		cout << "Want to convert another?" << endl;
		cout << "Type 'Y' for Yes and 'N' No : ";
		cin >> dec;
		if(dec == "Y" || dec == "y"){
			
			decide();
		} else {
			
			cout << "Cake!";
			
		}
	
}


void compliment(int s1[10],int s2[10],int sizelen){
	int bcd[5] = {8,4,2,1};
	int bcd2[5] = {1,1,1,1};
	int bcd3[5] = {};
	string dec;
	int arrange[5];
	
	for(int i = 0; i < 1; i++){
		
		arrange[0] = s1[0];
		arrange[1] = s2[0];		
}
	for(int k = 0; k < 4; k++){
			
		if(arrange[0] == bcd[k]){
			bcd2[k] = 0;
		}	
	}
	
	for(int z = 0; z < 4; z++){
			
		if(arrange[1] == bcd[z]){
			bcd2[z] = 0;
		}
		
		
	}
		cout << "\n";
		for(int j = 0; j < sizelen - 1; j++){
			
			//cout <<bcd2[j] << " ";
			bcd3[j] = bcd2[j];
		}
		
		if(bcd2[3] == 0){
			bcd3[3] = 1;
			
		}if(bcd2[3] == 1){
			bcd3[3] = 0;
		}
		if(bcd3[3] == 0){
		
		if(bcd2[2] != 0){
			
			for(int i = 2; i >= 0; i--){
				
				if(bcd2[i] == 0){
					bcd3[i] = 1;
					break;
				}
			}
			
		}}
		cout << "\n";
		cout << "Now Converting to 2's Compliment! ...";
		cout << "\n"<<"\n";
		cout <<"2's Compliment : ";
		for(int v = 0; v < sizelen - 1; v++){	
			cout << bcd3[v] << " ";

		}
		
		cout << "\n" << "\n";
		cout << "Want to convert another?" << endl;
		cout << "Type 'Y' for Yes and 'N' No : " ;
		cin >> dec;
		if(dec == "Y" || dec == "y"){
			
			decide();
		} else {
			
			cout << "Cake!";
			
		}
	
}


void posBrain2(int n1[10], int n2[10], int n3[10], int sizelen){
	
int bcd[5] = {8,4,2,1};

cout << "\n";

cout << "\n" << "Converting to POS (PRODUCT of SUM)! ..." << "\n";
cout << "\n";
cout << "POS/1's Compliment : ";

for(int dis = 0; dis < sizelen - 1; ++dis){

if(n1[0] == bcd[dis] || n2[0] == bcd[dis]){
cout << " "<< 0;


} else if (n2[0] == bcd[dis]){
	cout << " "<< 0;

} else if(n3[0] == bcd[dis]) {
	cout << " "<< 0;

}
else if(n1[0] != bcd[dis]){
	cout << " "<< 1;
	 
}else if(n2[0] != bcd[dis]){
	cout << " "<< 1;
	
}else if(n3[0] != bcd[dis]){
	cout << " "<< 1;
	
}}
	
}


void posBrain1(int n1[10], int n2[10], int sizelen){
	
int bcd[5] = {8,4,2,1};
cout << "\n";

cout << "\n" << "Converting to POS (PRODUCT of SUM)! ..." << "\n";
cout << "\n";
cout << "POS/1's Compliment : ";

for(int dis = 0; dis < sizelen - 1; ++dis){

if(n1[0] == bcd[dis] || n2[0] == bcd[dis]){
cout << " "<< 0;


} else if (n2[0] == bcd[dis]){
	cout << " "<< 0;
	
	
} else if(n1[0] != bcd[dis]){
	cout << " "<< 1;
	
}else if(n2[0] != bcd[dis]){
	cout << " "<< 1;
	
	
}}}


void binBrain2(int n1[5], int n2[5], int n3[5], int sizelen){

int bcd[5] = {8,4,2,1};

cout << "BCD CODE : ";

for(int disbcd = 0; disbcd < sizelen - 1; ++disbcd){
	
	cout << bcd[disbcd] << " ";
}

cout << "\n";

cout << "\n" << "Converting to Binary! ..." << "\n";
cout << "\n";
cout << "BINARY : ";

for(int dis = 0; dis < sizelen - 1; ++dis){

if(n1[0] == bcd[dis] || n2[0] == bcd[dis]){
cout << " "<< 1;


} else if (n2[0] == bcd[dis]){
	cout << " "<< 1;
	
	
} else if(n3[0] == bcd[dis]) {
	cout << " "<< 1;
	
}
else if(n1[0] != bcd[dis]){
	cout << " "<< 0;
	
}else if(n2[0] != bcd[dis]){
	cout << " "<< 0;
	
}else if(n3[0] != bcd[dis]){
	cout << " "<< 0;
	
}}
posBrain2(n1,n2,n3,sizelen);
compliment1(n1,n2,n3,sizelen);

}


void binBrain(int n1[5], int n2[5], int sizelen){

int bcd[5] = {8,4,2,1};

cout << "BCD CODE : ";

for(int disbcd = 0; disbcd < sizelen - 1; ++disbcd){
	
	cout << bcd[disbcd] << " ";
}

cout << "\n";
cout << "\n" << "Converting to Binary! ..." << "\n";
cout << "\n";
cout << "BINARY : ";

for(int dis = 0; dis < sizelen - 1; ++dis){

if(n1[0] == bcd[dis] || n2[0] == bcd[dis]){
cout << " "<< 1;



} else if (n2[0] == bcd[dis]){
	cout << " "<< 1;
	
	
} else if(n1[0] != bcd[dis]){
	cout << " "<< 0;
	
}else if(n2[0] != bcd[dis]){
	cout << " "<< 0;
	
}}posBrain1(n1,n2,sizelen);
	compliment(n1,n2,sizelen);}

void link2(int sigma2[100], int n, int sizelen){
	
	int arr1[5];
	int arr2[5];
	int arr3[5];
	
	for(int k = 0; k < sizelen; k++){
				
	for(int z = k + 1; z < sizelen; z++){
					
	for(int q = z + 1; q < sizelen; q++){
	int add_ = sigma2[k] + sigma2[z] + sigma2[q];
	if(add_ == n){
	
	cout << "Found the SUM! : " << sigma2[k] << " + " << sigma2[z]  << " + " << sigma2[q] << " = " << add_ << endl;
	arr1[0] = sigma2[k];
	arr2[0] = sigma2[z];
	arr3[0] = sigma2[q];
	binBrain2(arr1, arr2, arr3, sizelen);}}}}}



void link1(int sigma1[100], int n, int sizelen){
	
	int arr1[5];
	int arr2[5];
	int flag = 0;
	for(int i = 0; i < sizelen; i ++){
		
	for (int j = i + 1; j < sizelen; j++ ){
			
	int add_ = sigma1[i] + sigma1[j];
		
	if(add_ == n){
			
	flag++;
	cout << "Found the SUM! : "<< sigma1[i] << " + " << sigma1[j] << " = " << add_ << endl;
			
	arr1[0] = sigma1[i];
	arr2[0] = sigma1[j];
	binBrain(arr1, arr2, sizelen);}}}
	
	if (flag == 0){
	
	link2(sigma1, n, sizelen);}}

void decide(){
	
	int bcd[5] = {8,4,2,1};
	int deciinput [100];
	int sizelen = sizeof(bcd)/ sizeof(bcd[0]);
	int n;
	
		cout << "Welcome to 'PINK LOGIC' DLD Solutions By Khawaja Aswad Ul Husnain!";
		cout << "\n\n";
		cout << "For any inquiry or Bug Report Please contact me here '2112357@szabist-isb.pk'";
		cout << "\n" << "\n" << "\n";
		cout << "Please Add your Decimal/Integer Here " << " : ";
		cin >> n;
		cout << "\n" << "\n" << "\n";		
	
		link1(bcd, n, sizelen);
	
}

int main(){
	
	decide();
	
}

