#include<iostream>
using namespace std;

class company{
    protected:
    string company_name, location;
    public:
    company(string company_name, string location){
        this->company_name= company_name;
        this->location = location;
    }
};

class team : public company{
    protected:
    string team_name,project;
    public:
    team(string company_name, string location, string team_name, string project) : company(company_name,location){
        this->project=project;
        this->team_name=team_name;
    }
};

class Developer : public team{
    protected:
    string developer_name,programming_language;
    public:
    Developer(string company_name, string location,string team_name, string project, string developer_name, string programming_language) : team(company_name,location,team_name,project){
        this->developer_name= developer_name;
        this->programming_language=programming_language;
    }
    void show(){
        cout<<company_name<<endl;
        cout<<location<<endl;
        cout<<team_name<<endl;
        cout<<project<<endl;
        cout<<developer_name<<endl;
        cout<<programming_language<<endl;
    }
};

int main(){
    Developer dev("Apple","LA","Quad-tri","iPhone","Sid","C++");
    dev.show();

    return 0;
}