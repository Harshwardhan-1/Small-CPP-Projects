//REAL ESTATE MANAGEMENT SYSTEM.
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
class Property{
    private:
    int PropertyID;
    string ownerName;
    string address;
    string type;
    double price;
    
    public:
   Property(){

   }

    Property(int propID,string ownerN,string addr,string t,double p){
        PropertyID=propID;
       ownerName=ownerN;
       address=addr;
       type=t;
       price=p;
    }

    ~Property(){
        cout<<"Destructor Called! Cleaning up Object:"<<endl;
    }

    void addProperty();
    void viewProperties();
    void searchProperty();
    void deleteProperty();
};

void Property::addProperty(){
ofstream file("properties.txt",ios::app);
cout<<"PropertyID:"<<endl;
cin>>PropertyID;
cin.ignore();
cout<<"Enter Owner Name:"<<endl;
getline(cin,ownerName);
cout<<"Address:"<<endl;
getline(cin,address);
cout<<"type:"<<endl;
getline(cin,type);
cout<<"Price:"<<endl;
cin>>price;
file<<PropertyID<<","<<ownerName<<","<<address<<","<<type<<","<<price<<endl;
file.close();
cout<<"Property added successfully:"<<endl;
}

void Property::viewProperties(){
    ifstream file("properties.txt");
    string line;
    int count=0;
    cout<<"list of properties:"<<endl;
    while(getline(file,line)){
    count++;
    cout<<count<<","<<line<<endl;
    }
    if(count==0){
        cout<<"No record found:"<<endl;
        file.close();
    }
}

void Property::searchProperty(){
    int searchID;
    bool found=false;
    cout<<"Enter property id to search:"<<endl;
    cin>>searchID;
    ifstream file("properties.txt");
    string line;
    while(getline(file,line)){
        stringstream ss(line);
        string temp;
        getline(ss, temp, ',');
        int id = stoi(temp); 
        if (id == searchID) {
            found = true;
            string ownerName, address, type;
            double price;
            getline(ss, ownerName, ','); 
            getline(ss, address, ',');    
            getline(ss, type, ',');       
            ss >> price;                  
            cout << "Property found:" << endl;
            cout << "Owner: " << ownerName << endl;
            cout << "Address: " << address << endl;
            cout << "Type: " << type << endl;
            cout << "Price: " << price << endl;
            break;
        }
    }

    file.close();
    if (!found) {
        cout << "Property not found." << endl;
    }
}
    
void Property::deleteProperty(){
    int deleteID;
    bool found=false;
    cout<<"Enter propertyID to delete:"<<endl;
    cin>>deleteID;
    ifstream fin("properties.txt");
    ofstream fout("temp.txt");
    while(fin>>deleteID){
        fin.ignore();
        getline(fin,ownerName,',');
        getline(fin,address,',');
        getline(fin,type,',');
        fin>>price;
        if(PropertyID==deleteID){
         found=true;
         continue;
        }
        fout<<PropertyID<<","<<ownerName<<","<<address<<","<<type<<","<<price<<endl;
    }

    fin.close();
    fout.close();
    remove("properties.txt");
    rename("temp.txt","properties.txt");
    if(found){
        cout<<"property delete successfully:"<<endl;
    }
    else{
        cout<<"property not found:"<<endl;
    }

}

int main(){
    Property p;
    int choice;
do{
    cout<<"REAL ESTATE MANAGEMENT SYSTEM:"<<endl;
    cout<<"1.Add Property:"<<endl;
    cout<<"2.View Properties:"<<endl;
    cout<<"3.Search Property:"<<endl;
    cout<<"4.Price:"<<endl;
    cout<<"Exit:"<<endl;
    cout<<"Enter Choice:"<<endl;
    cin>>choice;

    switch(choice){
    case 1:p.addProperty();
    break;
    case 2:p.viewProperties();
    break;
    case 3:p.searchProperty();
    break;
    case 4:p.deleteProperty();
    break;
    case 5:cout<<"Existing Program:"<<endl;
    default: cout<<"Invalid choice! Try Again:"<<endl;
    }
}
while(choice!=5);
    return 0;
}