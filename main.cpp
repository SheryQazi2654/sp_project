#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int i,j,k,temp;
long int t_id;
int w=0;

struct loggin
{
    string user;
    string pass;
};

struct name
{
    string name;
};

struct date
{
    int dd;
    int mm;
    int yy;
};


struct contact
{
    string mob;
    string email;

};

struct adress
{
    string street;
    string city;
    string country;
};

struct depart
{
    name d_name;
    name d_abv;
};

struct course
{
    name title;
    depart c_depart;
    string c_id;
    name c_t_name;
};

struct student
{
    name s_name;
    name f_name;
    string cnic;
    string s_id;
    loggin s_loggin;
    date dob;
    contact s_contact;
    adress s_adress;
    depart s_depart;
    date dog;
    course r_c[30];
};


struct advisor
{
    name t_name;
    int t_id;
    contact t_contact;
    adress t_adress;
    depart t_depart;
    loggin ad_loggin;
};

//////////////////////////////////////////////////////////////////////////////

void create(student *stu, int b)
{
    cout<<"                    WELCOME TO STUDENT REGISTRATION"<<endl;
    cout<<"**************************************************************"<<endl;
    for( ;i<b;)
    {
        temp=i;
        cout<<"                ENTER DATA OF STUDENT : "<<i+1<<endl;
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter student name"<<endl;
        getline(cin, stu[i].s_name.name);
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                father name"<<endl;
        getline(cin, stu[i].f_name.name);
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter student CNIC"<<endl;
        getline(cin,stu[i].cnic);
        cout<<"**************************************************************"<<endl;
        cout<<"                enter id of student"<<endl;
        getline(cin,stu[i].s_id);
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter department information"<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter department"<<endl;
        getline(cin, stu[i].s_depart.d_name.name);
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter department abrevation"<<endl;
        getline(cin, stu[i].s_depart.d_abv.name);
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter contact information"<<endl;
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter mob no. "<<endl;
        getline(cin,stu[i].s_contact.mob);
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter email"<<endl;
        getline(cin, stu[i].s_contact.email);
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter date of graduation of student"<<endl;
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                day"<<endl;
        cout<<endl;
        cin>>stu[i].dog.dd;
        cin.ignore();
        cout<<"**************************************************************"<<endl;
        cout<<"                enter month"<<endl;
        cin>>stu[i].dog.mm;
        cin.ignore();
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter year"<<endl;
        cin>>stu[i].dog.yy;
        cin.ignore();
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter date of birth of student"<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                day"<<endl;
        cin>>stu[i].dob.dd;
        cin.ignore();
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter month"<<endl;
        cin>>stu[i].dob.mm;
        cin.ignore();
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"                enter year"<<endl;
        cin>>stu[i].dob.yy;
        cin.ignore();
        cout<<endl;
        cout<<"enter user name of student e-g same as id "<<endl;
        getline(cin,stu[i].s_loggin.user);
        cout<<"enter the password for the student"<<endl;
        getline(cin,stu[i].s_loggin.pass);
        cout<<"**************************************************************"<<endl;
        cout<<endl;
        cout<<"     Thank you, student has been registered"<<endl;
        cout<<endl;
        i++;
        break;
    }

}

void edit(student *stu, int b)
{
    string t_s_id;
    cout<<"enter the id of student THAT YOU WANT TO ## EDIT ##"<<endl;
    getline(cin, t_s_id);
    for(int a=0; a<b; a++)
    {
        if(t_s_id==stu[a].s_id)
        {
        cout<<"enter data of student:  "<<a+1<<endl;
        cout<<endl;
        cout<<"enter student name"<<endl;
        getline(cin, stu[a].s_name.name);
        cout<<"**************************************************************"<<endl;
        cout<<"father name"<<endl;
        getline(cin, stu[a].f_name.name);
        cout<<"enter student CNIC"<<endl;
        getline(cin,stu[a].cnic);
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"enter department information"<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"enter department name"<<endl;
        getline(cin, stu[a].s_depart.d_name.name);
        cout<<"**************************************************************"<<endl;
        cout<<"enter abrevation of department"<<endl;
        getline(cin, stu[a].s_depart.d_abv.name);
        cout<<"**************************************************************"<<endl;
        cout<<"enter contact information"<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"enter mob no. "<<endl;
        getline(cin,stu[a].s_contact.mob);
        cout<<"**************************************************************"<<endl;
        cout<<"enter email"<<endl;
        getline(cin, stu[a].s_contact.email);
        cout<<"**************************************************************"<<endl;
        cout<<"enter date of graduation of student"<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"day"<<endl;
        cout<<"**************************************************************"<<endl;
        cin>>stu[a].dog.dd;
        cin.ignore();
        cout<<"**************************************************************"<<endl;
        cout<<"enter month"<<endl;
        cin>>stu[a].dog.mm;
        cin.ignore();
        cout<<"**************************************************************"<<endl;
        cout<<"enter year"<<endl;
        cin>>stu[a].dog.yy;
        cin.ignore();
        cout<<"**************************************************************"<<endl;
        cout<<"enter date of birth of student"<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"day"<<endl;
        cin>>stu[a].dog.dd;
        cin.ignore();
        cout<<"**************************************************************"<<endl;
        cout<<"enter month"<<endl;
        cin>>stu[a].dob.mm;
        cin.ignore();
        cout<<"**************************************************************"<<endl;
        cout<<"enter year"<<endl;
        cin>>stu[a].dob.yy;
        cin.ignore();
        cout<<endl;
        cout<<"enter user name is e-g same as is"<<endl;
        getline(cin, stu[a].s_loggin.user);
        cout<<"enter the password for student"<<endl;
        getline(cin, stu[a].s_loggin.pass);
        cout<<"###### THNAK YOU STUDENT HAS BEEN EDITED #######"<<endl;
        break;
        }
        else
            {
                cout<<"*******NO STUDENT OF THIS ID FOUND*********"<<endl;
            }
        break;
    }

}

void del(student *stu, int b)
{
    string t_s_id;
    int l_var=0;
    cout<<"enter id of student THAT YOU WANT TO ## DELETE ##"<<endl;
    getline(cin,t_s_id);
    for(int c=0; c<b; c++)
    {
        if(t_s_id==stu[c].s_id)
        {
            l_var=c;
        }
        else
            cout<<"NO STUDENT OF THIS ID FOUND"<<endl;
    }
    for(int p=l_var; p<i; p++)
    {
        stu[p]=stu[p+1];
    }
    i--;
    cout<<"####### STUDENT HAS BEEN DELETED SUCCESFULLY #########"<<endl;
}

void display(student *stu, int b)
{
    for(int d=0; d<i; d++)
    {
        cout<<"THIS FUCTION WILL DISPLAY DATA OF ALL THE REGISTERED STUDENTS"<<endl;
        cout<<endl;
        cout<<"      DATA OF  STUDENT : "<<d+1<<endl;

        cout<<"student name : "<<stu[d].s_name.name<<endl;
        cout<<"father naem : "<<stu[d].f_name.name<<endl;
        cout<<"CNIC : "<<stu[d].cnic<<endl;
        cout<<"DOB : "<<stu[d].dob.dd<<"/"<<stu[d].dob.mm<<"/"<<stu[d].dob.yy<<endl;
        cout<<"ID : "<<stu[d].s_id<<endl;
        cout<<"MOB : "<<stu[d].s_contact.mob<<endl;
        cout<<"EMAIL : "<<stu[d].s_contact.email<<endl;
        cout<<"DEPARTMENT : "<<stu[d].s_depart.d_name.name<<endl;
        cout<<"ABREVATION OF DEPARTMENT : ";
        cout<<stu[d].s_depart.d_abv.name<<endl;

        cout<<"DOG : "<<stu[d].dog.dd<<"/"<<stu[d].dog.mm<<"/"<<stu[d].dog.yy<<endl;

    }
}

void search_id(student *stu, int b)
{
    string t_s_id;
    cout<<"ENETR ID OF STUDENT YOU WANT TO SEARCH"<<endl;
    getline(cin, t_s_id);
    for(int s=0; s<b; s++)
    {
        if(t_s_id==stu[s].s_id)
        {
            cout<<"      DATA OF  STUDENT : "<<s+1<<""<<endl;

            cout<<"student name : "<<stu[s].s_name.name<<endl;
            cout<<"father naem : "<<stu[s].f_name.name<<endl;
            cout<<"CNIC : "<<stu[s].cnic<<endl;
            cout<<"DOB : "<<stu[s].dob.dd<<"/"<<stu[s].dob.mm<<"/"<<stu[s].dob.yy<<endl;
            cout<<"ID : "<<stu[s].s_id<<endl;
            cout<<"MOB : "<<stu[s].s_contact.mob<<endl;
            cout<<"EMAIL : "<<stu[s].s_contact.email<<endl;
            cout<<"DEPARTMENT : "<<stu[s].s_depart.d_name.name<<endl;
            cout<<"ABREVATION OF DEPARTMENT : ";
            cout<<stu[s].s_depart.d_abv.name<<endl;

            cout<<"DOG : "<<stu[s].dog.dd<<"/"<<stu[s].dog.mm<<"/"<<stu[s].dog.yy<<endl;
        }
        else
            cout<<"NO STUDENT OF THIS ID FOUND"<<endl;

    }
}

void search_name(student *stu, int b)
{
    cout<<"ENETR NAME OF STUDENT YOU WANT TO SEARCH"<<endl;
    string t_n;
    getline(cin, t_n);
    cin.ignore();
    int s_var;
    for(int s=0; s<b; s++)
    {
        if(t_n == stu[s].s_name.name)
        {
            cout<<"      DATA OF  STUDENT : "<<s+1<<""<<endl;

            cout<<"student name : "<<stu[s].s_name.name<<endl;
            cout<<"father naem : "<<stu[s].f_name.name<<endl;
            cout<<"CNIC : "<<stu[s].cnic<<endl;
            cout<<"DOB : "<<stu[s].dob.dd<<"/"<<stu[s].dob.mm<<"/"<<stu[s].dob.yy<<endl;
            cout<<"ID : "<<stu[s].s_id<<endl;
            cout<<"MOB : "<<stu[s].s_contact.mob<<endl;
            cout<<"EMAIL : "<<stu[s].s_contact.email<<endl;
            cout<<"DEPARTMENT : "<<stu[s].s_depart.d_name.name<<endl;
            cout<<"ABREVATION OF DEPARTMENT : ";
            cout<<stu[s].s_depart.d_abv.name<<endl;

            cout<<"DOG : "<<stu[s].dog.dd<<"/"<<stu[s].dog.mm<<"/"<<stu[s].dog.yy<<endl;
        }
        else
            cout<<"NO STUDENT OF THIS NAME FOUND"<<endl;

    }
    cin>>s_var;
    cin.ignore();
}

void search_dept(student *stu, int b)
{
    cout<<"ENETR NAME OF DEPARTMENT OF STUDENT YOU WANT TO SEARCH"<<endl;
    string t_n;
    getline(cin, t_n);
    cin.ignore();
    for(int s=0; s<b; s++)
    {
        if(t_n==stu[s].s_depart.d_name.name)
        {
            cout<<"      DATA OF  STUDENT : "<<s+1<<""<<endl;

            cout<<"student name : "<<stu[s].s_name.name<<endl;
            cout<<"father naem : "<<stu[s].f_name.name<<endl;
            cout<<"CNIC : "<<stu[s].cnic<<endl;
            cout<<"DOB : "<<stu[s].dob.dd<<"/"<<stu[s].dob.mm<<"/"<<stu[s].dob.yy<<endl;
            cout<<"ID : "<<stu[s].s_id<<endl;
            cout<<"MOB : "<<stu[s].s_contact.mob<<endl;
            cout<<"EMAIL : "<<stu[s].s_contact.email<<endl;
            cout<<"DEPARTMENT : "<<stu[s].s_depart.d_name.name<<endl;
            cout<<"ABREVATION OF DEPARTMENT : ";
            cout<<stu[s].s_depart.d_abv.name<<endl;

            cout<<"DOG : "<<stu[s].dog.dd<<"/"<<stu[s].dog.mm<<"/"<<stu[s].dog.yy<<endl;
        }
        else
            cout<<"NO STUDENT OF THID dept FOUND"<<endl;

    }
}

void search_cnic(student *stu, int b)
{
    string t_s_id;
    cout<<"ENETR CNIC OF STUDENT YOU WANT TO SEARCH"<<endl;
    getline(cin, t_s_id);
    cin.ignore();
    for(int s=0; s<b; s++)
    {
        if(t_s_id==stu[s].cnic)
        {
            cout<<"      DATA OF  STUDENT : "<<s+1<<""<<endl;

            cout<<"student name : "<<stu[s].s_name.name<<endl;
            cout<<"father naem : "<<stu[s].f_name.name<<endl;
            cout<<"CNIC : "<<stu[s].cnic<<endl;
            cout<<"DOB : "<<stu[s].dob.dd<<"/"<<stu[s].dob.mm<<"/"<<stu[s].dob.yy<<endl;
            cout<<"ID : "<<stu[s].s_id<<endl;
            cout<<"MOB : "<<stu[s].s_contact.mob<<endl;
            cout<<"EMAIL : "<<stu[s].s_contact.email<<endl;
            cout<<"DEPARTMENT : "<<stu[s].s_depart.d_name.name<<endl;
            cout<<"ABREVATION OF DEPARTMENT : ";
            cout<<stu[s].s_depart.d_abv.name<<endl;

            cout<<"DOG : "<<stu[s].dog.dd<<"/"<<stu[s].dog.mm<<"/"<<stu[s].dog.yy<<endl;
        }
        else
            cout<<"NO STUDENT OF THIS ID FOUND"<<endl;

    }
}

void read_s(student *stu, int b)
{
    ifstream in;
    in.open("student.txt",ios::app);
    if(in.is_open())
    {
        for(int u=0; u<b; u++)
        {
            getline(in, stu[u].s_name.name);
            getline(in, stu[u].f_name.name);
            getline(in,stu[u].cnic);
            getline(in,stu[u].s_id);
            getline(in, stu[u].s_depart.d_name.name);
            getline(in, stu[u].s_depart.d_abv.name);
            getline(in,stu[u].s_contact.mob);
            getline(in, stu[u].s_contact.email);
            in>>stu[u].dog.dd;
            in>>stu[u].dog.mm;
            in>>stu[u].dog.yy;
            in>>stu[u].dob.dd;
            in>>stu[u].dob.mm;
            in>>stu[u].dob.yy;
            getline(in,stu[u].s_loggin.user);
            getline(in,stu[u].s_loggin.pass);
        }
    }
    else
        cout<<"no such file is opened"<<endl;
    in.close();

}

void write_s(student *stu, int b)
{
    ofstream out;
    out.open("student.txt", ios::ate);
    if(out.is_open())
    {
        for(int u=0; u<b; u++)
        {
            out<<stu[u].s_name.name;
            out<<endl;
            out<<stu[u].f_name.name;
            out<<endl;
            out<<stu[u].cnic;
            out<<endl;
            out<<stu[u].s_id;
            out<<endl;
            out<<stu[u].s_depart.d_name.name;
            out<<endl;
            out<<stu[u].s_depart.d_abv.name;
            out<<endl;
            out<<stu[u].s_contact.mob;
            out<<endl;
            out<<stu[u].s_contact.email;
            out<<endl;
            out<<stu[u].dog.dd;
            out<<endl;
            out<<stu[u].dog.mm;
            out<<endl;
            out<<stu[u].dog.yy;
            out<<endl;
            out<<stu[u].dob.dd;
            out<<endl;
            out<<stu[u].dob.mm;
            out<<endl;
            out<<stu[u].dob.yy;
            out<<endl;
            out<<stu[u].s_loggin.user;
            out<<endl;
            out<<stu[u].s_loggin.pass;
            out<<endl;
        }
    }
    else
        cout<<"no such file is opened"<<endl;
    out.close();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////

void c_create(course *cou, int b)
{
    for(;j<b;)
    {
        cout<<"                WELCOME TO COURSE REGISTRATION"<<endl;
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<endl;
        cout<<"ENTER COURSE NAME"<<endl;
        getline(cin, cou[j].title.name);
        cout<<"ENTER DEPARTMENT BY WHICH COURSE IS OFFERED"<<endl;
        getline(cin, cou[j].c_depart.d_name.name);
        cout<<"ENTER NAME OF THE TEACHER"<<endl;
        getline(cin, cou[j].c_t_name.name);
        cout<<"ENTER COURSE ID"<<endl;
        getline(cin,cou[j].c_id);
        cout<<endl;
        cout<<"THANK YOU SUCCESFULLY REGISTERED THE COURSE"<<endl;
        cout<<endl;
        cout<<"**************************************************************"<<endl;
        j++;
        break;


    }
}

void c_edit(course *cou, int b)
{
    string t_c_id;
    cout<<"enter the id of course you want to edit"<<endl;
    getline(cin, t_c_id);
    for(int e=0; e<b;e++)
    {
        if(t_c_id==cou[e].c_id)
        {
            cout<<"                WELCOME TO COURSE EDIT"<<endl;
            cout<<endl;
            cout<<"**************************************************************"<<endl;
            cout<<endl;
            cout<<"ENTER COURSE NAME"<<endl;
            getline(cin, cou[e].title.name);
            cout<<"ENTER DEPARTMENT BY WHICH COURSE IS OFFERED"<<endl;
            getline(cin, cou[e].c_depart.d_name.name);
            cout<<"ENTER NAME OF THE TEACHER"<<endl;
            getline(cin, cou[e].c_t_name.name);
            cout<<"ENTER COURSE ID"<<endl;
            getline(cin,cou[e].c_id);
            cout<<endl;
            cout<<"THANK YOU SUCCESFULLY REGISTERED THE COURSE"<<endl;
            cout<<endl;
            cout<<"**************************************************************"<<endl;
        }
        cout<<"######### COURSE SUCCESFULLY EDITED #############"<<endl;

    }
}

void c_delete(course *cou, int b)
{
    string t_c_id;
    int l_var;
    cout<<"enter the id of course you want delete"<<endl;
    getline(cin, t_c_id);
    for(int x=0; x<b; x++)
    {
        if(t_c_id==cou[x].c_id)
        {
            l_var=x;
        }
    }
    for(int q=l_var; q<b; q++)
    {
        cou[q]=cou[q+1];
    }
    j--;
}

void c_display(course *cou, int b)
{
    cout<<"THIS FUCTION WILL DISPALY ALL THE REGISTERED COURSES"<<endl;
    for(int m=0; m<b; m++)
    {
        cout<<"SHOWING DATA OF COURSE : "<<m+1<<endl;
        cout<<endl;
        cout<<"COURSE TITLE >>>>>>>>>> "<<cou[m].title.name<<endl;
        cout<<"COURSE ID >>>>>>>>>>>>> "<<cou[m].c_id<<endl;
        cout<<"DEOARTMENT OF COURSE >> "<<cou[m].c_depart.d_name.name<<endl;
        cout<<"INSTRUCTER s NAME >>>>> "<<cou[m].c_t_name.name<<endl;
        cout<<endl;
        cout<<"**************************************************************"<<endl;

    }
}

void c_search_id(course *cou, int b)
{
    string t_c_id;
    cout<<"enter the id of course you want search"<<endl;
    getline(cin, t_c_id);
    for(int m=0; m<b; m++)
    {
        if(t_c_id==cou[m].c_id)
        {
            cout<<"SHOWING DATA OF COURSE : "<<m+1<<endl;
            cout<<endl;
            cout<<"COURSE TITLE >>>>>>>>>> "<<cou[m].title.name<<endl;
            cout<<"COURSE ID >>>>>>>>>>>>> "<<cou[m].c_id<<endl;
            cout<<"DEOARTMENT OF COURSE >> "<<cou[m].c_depart.d_name.name<<endl;
            cout<<"INSTRUCTER s NAME >>>>> "<<cou[m].c_t_name.name<<endl;
            cout<<endl;
            cout<<"**************************************************************"<<endl;

        }
    }
}

void c_search_name(course *cou, int b)
{
    string t_name;
    cout<<"enter the name of course you want search"<<endl;
    getline(cin, t_name);
    cin.ignore();
    for(int m=0; m<b; m++)
    {
        if(t_name==cou[m].title.name)
        {
            cout<<"SHOWING DATA OF COURSE : "<<m+1<<endl;
            cout<<endl;
            cout<<"COURSE TITLE >>>>>>>>>> "<<cou[m].title.name<<endl;
            cout<<"COURSE ID >>>>>>>>>>>>> "<<cou[m].c_id<<endl;
            cout<<"DEOARTMENT OF COURSE >> "<<cou[m].c_depart.d_name.name<<endl;
            cout<<"INSTRUCTER s NAME >>>>> "<<cou[m].c_t_name.name<<endl;
            cout<<endl;
            cout<<"**************************************************************"<<endl;

        }
    }
}

void c_search_c_t_name(course *cou, int b)
{
    string t_name;
    cout<<"enter the name of teacher of course you want search"<<endl;
    getline(cin, t_name);
    cin.ignore();
    for(int m=0; m<b; m++)
    {
        if(t_name==cou[m].c_t_name.name)
        {
            cout<<"SHOWING DATA OF COURSE : "<<m+1<<endl;
            cout<<endl;
            cout<<"COURSE TITLE >>>>>>>>>> "<<cou[m].title.name<<endl;
            cout<<"COURSE ID >>>>>>>>>>>>> "<<cou[m].c_id<<endl;
            cout<<"DEOARTMENT OF COURSE >> "<<cou[m].c_depart.d_name.name<<endl;
            cout<<"INSTRUCTER s NAME >>>>> "<<cou[m].c_t_name.name<<endl;
            cout<<endl;
            cout<<"**************************************************************"<<endl;

        }
    }
}

void read_c(course *cou, int b)
{
     ifstream in;
    in.open("course.txt",ios::app);
    if(in.is_open())
    {
        for(int u=0; u<b; u++)
        {
            getline(in, cou[u].title.name);
            getline(in, cou[u].c_depart.d_name.name);
            getline(in, cou[u].c_t_name.name);
            getline(in, cou[u].c_id);

        }
    }
    else
        cout<<"no such file is opened"<<endl;
    in.close();


}

void write_c(course *cou, int b)
{
    ofstream out;
    out.open("course.txt", ios::ate);
    if(out.is_open())
    {
        for(int u=0; u<b; u++)
        {
            out<<cou[u].title.name<<endl;
            out<<cou[u].c_id<<endl;
            out<<cou[u].c_depart.d_name.name<<endl;
            out<<cou[u].c_t_name.name<<endl;
        }
    }
    else
        cout<<"no such file is opened"<<endl;
    out.close();

}

///////////////////////////////////////////////////////////////////////////////////////////////////

//functions regarding student

void add_c(course *cou, course *c_r, int b)
{
    string t_c_id;
    cout<<"ENTER COURSE ID YOU WANT TO SEARCH"<<endl;
    getline(cin, t_c_id);
    for(int v=0; v<b; v++)
    {
        if( t_c_id==cou[v].c_id )
        {
            if(w<=5)
                {
                    c_r[w]=cou[v];
                    w++;
                    cout<<"course successfully added"<<endl;
                }
            else
                cout<<"you' ve registered maximum no. of courses allowed by the ADMIN "<<endl;
        }
        else
            cout<<"no such course found"<<endl;
    }

}

void remove_c(course *c_r, int b)
{
    int l_var;
    string t_c_id;
    cout<<"enter the id of course you want to delete "<<endl;
    getline(cin, t_c_id);
    for(int v=0; v<b; v++)
    {
        if(t_c_id==c_r[v].c_id)
        {
            l_var=v;
        }
    }
    for(int y=l_var; y<b; y++)
    {
        c_r[y]=c_r[y+1];
    }
    w--;
    cout<<"course successfully dropped "<<endl;
}

void display_r_c(course *c_r, int b)
{
    for(int v=0; v<b; v++)
    {
        cout<<"SHOWING DATA OF COURSE : "<<v+1<<endl;
        cout<<endl;
        cout<<"COURSE TITLE >>>>>>>>>> "<<c_r[v].title.name<<endl;
        cout<<"COURSE ID >>>>>>>>>>>>> "<<c_r[v].c_id<<endl;
        cout<<"DEOARTMENT OF COURSE >> "<<c_r[v].c_depart.d_name.name<<endl;
        cout<<"INSTRUCTER s NAME >>>>> "<<c_r[v].c_t_name.name<<endl;
        cout<<endl;
        cout<<"**************************************************************"<<endl;


    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{

    student *s = new student [30];
    course *c = new course [30];
    int w_var=1;
    while(w_var!=0)
    {
        int n=30;
        advisor a;
        loggin temp;
        int s_var=0;
        cout<<"**************************************************************"<<endl;
        cout<<"*                                                            *"<<endl;
        cout<<"*                        WELCOME TO SRS                      *"<<endl;
        cout<<"*                                                            *"<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"*               ENTER 1 : FOR >>>>>>ADVISOR PANEL            *"<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"*               ENTER 2 : FOR >>>>>>STUDENT PANML            *"<<endl;
        cout<<"**************************************************************"<<endl;
        cin>>s_var;
        cin.ignore();
        if(s_var==1)
        {
            cout<<">>>>>>>>>>>>>>>>>>>>>WELCOM TO ADVISOR PANEL<<<<<<<<<<<<<<<<<<"<<endl;
            cout<<endl;
            cout<<"                       ***PLS LOGGIN***                       "<<endl;
            cout<<endl;
            cout<<"               <<<<<<<<<<<<ENTER USER NAME>>>>>>>>>";
            getline(cin, a.ad_loggin.user);
            temp.user=a.ad_loggin.user;
            cout<<endl;
            cout<<"               <<<<<<<<<<<<ENTER PASSWORD>>>>>>>>>>";
            getline(cin, a.ad_loggin.pass);
            temp.pass=a.ad_loggin.pass;
            cout<<endl;
            cout<<"<<<<<<<<<<<<<<<SUCCESFULLY REGISTERED>>>>>>>>>>>>>>>>"<<endl;

            w_var=1;
            while(w_var!=0)
            {
                cout<<"************PLS LOGGIN ONCE MORE TO ENTER CONSOLE*************"<<endl;
                //cout<<"ENTER USER NAME : ";
                //getline(cin, temp.user);
                cout<<endl;
                //cout<<"ENTER PASSWORD : ";
                //getline(cin, temp.pass);
                cout<<endl;
                if( temp.user==a.ad_loggin.user && temp.pass==a.ad_loggin.pass)
                {
                    cout<<">>>>>>>>>>>>>>>>>>>>>>>ACCESS GRANTED<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
                    cout<<endl;
                    cout<<"**************************************************************"<<endl;
                    cout<<"*         ENTER 1 : FOR >>>>>>>>STUDENT SECTION              *"<<endl;
                    cout<<"**************************************************************"<<endl;
                    cout<<"*         ENTER 2 : FOR >>>>>>COURSES SECTION                *"<<endl;
                    cout<<"**************************************************************"<<endl;
                    cin>>s_var;
                    cin.ignore();
                    switch(s_var)
                    {
                    case 1:
                        {
                            w_var=1;
                            while(w_var!=0)
                            {
                            cout<<"*****************************************************************************"<<endl;
                            cout<<"*                                                                           *"<<endl;
                            cout<<"*                 WELCOM TO STUDENT REGISTERATION                           *"<<endl;
                            cout<<"*                                                                           *"<<endl;
                            cout<<"*****************************************************************************"<<endl;
                            cout<<"*               ENTER  |1|  TO CREATE STUDENT                               *"<<endl;
                            cout<<"*****************************************************************************"<<endl;
                            cout<<"*               ENTER  |2|  TO EDIT STUDENT                                 *"<<endl;
                            cout<<"*****************************************************************************"<<endl;
                            cout<<"*               ENTER  |3|  TO DELETE STUDENT                               *"<<endl;
                            cout<<"*****************************************************************************"<<endl;
                            cout<<"*               ENTER  |4|  TO DISPLAY STUDENT                              *"<<endl;
                            cout<<"*****************************************************************************"<<endl;
                            cout<<"*               ENTER  |5|  TO SEARCH STUDENT                               *"<<endl;
                            cout<<"*****************************************************************************"<<endl;
                            cout<<"*               ENTER  |6|  TO GO BACK                                      *"<<endl;
                            cout<<"*****************************************************************************"<<endl;
                            cout<<"*               ENTER  |7|  TO READ STUDENT DATA FROM FILE student.txt      *"<<endl;
                            cout<<"*****************************************************************************"<<endl;
                            cout<<"*               ENTER  |8|  FOR WRITTING TO THE FILE student.txt            *"<<endl;
                            cout<<"*****************************************************************************"<<endl;
                            cin>>s_var;
                            cin.ignore();
                            switch(s_var)
                            {
                                case 1:
                                {
                                    //creat student
                                    w_var=1;
                                    while(w_var!=0)
                                    {
                                        create(s,n);
                                        cout<<"press 1 if you want to add another student or 0 to go back"<<endl;
                                        cin>>w_var;
                                        cin.ignore();
                                    }
                                    break;
                                }
                                case 2:
                                {
                                    //edit student
                                    w_var=1;
                                    while(w_var!=0)
                                    {
                                        edit(s,i);
                                        write_s(s,i);

                                        cout<<"enter 1 if you want to perform another operation"<<endl;
                                        cin>>w_var;
                                        cin.ignore();
                                    }
                                    break;
                                }
                                case 3:
                                {
                                    //DELTE student
                                    w_var=1;
                                    while(w_var!=0)
                                    {
                                        del(s,i);
                                        cout<<"press 1 if you want to ##DELETE## another student or 0 to go back"<<endl;
                                        cin>>w_var;
                                        cin.ignore();
                                    }
                                    break;
                                }
                                case 4:
                                {
                                    w_var=1;
                                    //display student
                                    while(w_var!=0)
                                    {
                                        display(s,i);
                                        cout<<"enter 1 to do again or 0 "<<endl;
                                        cin>>w_var;
                                        cin.ignore();
                                    }
                                    break;
                                }
                                case 5:
                                {
                                    //student search
                                    cout<<"press 1 to search by id"<<endl;
                                    cout<<"press 2 to search by name"<<endl;
                                    cout<<"press 3 to search by dept"<<endl;
                                    cout<<"press 4 to search by CNIC"<<endl;
                                    cin>>s_var;
                                    cin.ignore();
                                    switch(s_var)
                                    {
                                        case 1:
                                        {
                                            //search by id
                                            w_var=1;
                                            while(w_var!=0)
                                            {
                                                search_id(s,i);
                                                cout<<"ENTER 1 IF YOU WANT TO SEARCH ANOTHER STUDENT"<<endl;
                                                cin>>w_var;
                                                cin.ignore();
                                            }

                                            break;
                                        }
                                        case 2:
                                        {
                                            //search by name
                                            w_var=1;
                                            while(w_var!=0)
                                            {
                                                search_name(s,i);
                                                cout<<"ENTER 1 IF YOU WANT TO SEARCH ANOTHER STIDENT "<<endl;
                                                cin>>w_var;
                                                cin.ignore();
                                            }
                                            break;
                                        }
                                        case 3:
                                        {
                                            //search by dept
                                            w_var=1;
                                            while(w_var!=0)
                                            {
                                                search_dept(s,i);
                                                cout<<"ENTER 1 IF YOU WANT TO SEARCH ANOTHER STIDENT "<<endl;
                                                cin>>w_var;
                                                cin.ignore();
                                            }
                                            break;
                                        }
                                        case 4:
                                        {
                                            //search by CNIC
                                            w_var=1;
                                            while(w_var!=0)
                                            {
                                                search_cnic(s,i);
                                                cout<<"ENTER 1 IF YOU WANT TO SEARCH ANOTHER STIDENT "<<endl;
                                                cin>>w_var;
                                                cin.ignore();
                                            }
                                            break;
                                        }
                                        default:
                                            cout<<"oops something is wrong"<<endl;
                                        break;
                                    }
                                }
                                case 6:
                                case 7:
                                {
                                    read_s(s, i);
                                    break;

                                }
                                case 8:
                                {
                                    write_s(s, i);
                                    break;
                                }
                                default:
                                break;
                            }
                                cout<<"enter 1 perfor another task or 0 to terminate"<<endl;
                                cin>>w_var;
                                cin.ignore();
                        }

                    }
                break;
                case 2:
                    {
                       w_var=1;
                       while(w_var!=0)
                       {
                        cout<<">>>>>>>>>>>>>>>>>>>>>WELCOM TO COURSES REGISTERATION<<<<<<<<<<<<<<<<<<"<<endl;
                        cout<<"**********ENTER 1 : TO CREATE COURSE "<<endl;
                        cout<<"**********ENTER 2 : TO EDIT COURSE "<<endl;
                        cout<<"**********ENTER 3 : TO DELETE COURSE "<<endl;
                        cout<<"**********ENTER 4 : TO DISPLAY COURSE "<<endl;
                        cout<<"**********ENTER 5 : TO SEARCH COURSE "<<endl;
                        cout<<"**********ENTER 6 : TO GO BACK "<<endl;
                        cout<<"**********ENTER 7 : TO READ DATA FROM FILE student.txt"<<endl;
                        cout<<"**********ENTER 8 : TO WRITE DATA TO FILE course.txt"<<endl;
                        cin>>s_var;
                        cin.ignore();
                        switch(s_var)
                        {
                            case 1:
                            {
                                //create_c
                                w_var=1;
                                while(w_var!=0)
                                {
                                    c_create(c,n);
                                    cout<<"ENTER 1 TO REGISTER ANOTHER COURESE OR 0 TO GO BACK"<<endl;
                                    cin>>w_var;
                                    cin.ignore();

                                }
                                break;
                            }
                            case 2:
                            {
                                //edit_c
                                w_var=1;
                                while(w_var!=0)
                                {
                                    c_edit(c,j);
                                    write_c(c,j);
                                    cout<<"ENTER 1 TO EDIT ANOTHER COURSE OR 0 TO GO BACK"<<endl;
                                    cin>>w_var;
                                    cin.ignore();
                                }
                                break;
                            }
                            case 3:
                            {
                                //delete_c
                                w_var=1;
                                while(w_var!=0)
                                {
                                    c_delete(c,j);
                                    cout<<"######### COURSE SUCCESFULLY DELTED #############"<<endl;
                                    cout<<"ENTER 1 TO EDIT ANOTHER COURSE OR 0 TO GO BACK"<<endl;
                                    cin>>w_var;
                                    cin.ignore();
                                }
                                break;
                            }
                            case 4:
                            {
                                //display_c
                                w_var=1;
                                while(w_var!=0)
                                {
                                    c_display(c,j);
                                    cout<<"ENTER 1 TO display again OR 0 TO GO BACK"<<endl;
                                    cin>>w_var;
                                    cin.ignore();

                                }
                                break;
                            }
                            case 5:
                            {
                                //search_c
                                cout<<"enter 1 to search by course id"<<endl;
                                cout<<"enter 2 to search by course name"<<endl;
                                cout<<"enter 2 to search by course teacher name"<<endl;
                                cin>>s_var;
                                cin.ignore();
                                switch(s_var)
                                {
                                    case 1:
                                    {
                                        //search_c_id
                                         w_var=1;
                                        while(w_var!=0)
                                        {
                                            c_search_id(c,j);
                                            cout<<"enter 1 if you wana do another search or 0 to terminate"<<endl;
                                            cin>>w_var;
                                            cin.ignore();
                                        }
                                        break;
                                    }
                                    case 2:
                                    {
                                        //search_c_name
                                        w_var=1;
                                        while(w_var!=0)
                                        {
                                            c_search_name(c,j);
                                            cout<<"enter 1 if you want to search another course or 0 to terminate"<<endl;
                                            cin>>w_var;
                                            cin.ignore();
                                        }
                                        break;
                                    }
                                    case 3:
                                    {
                                        //search_c_t_name
                                        w_var=1;
                                        while(w_var!=0)
                                        {
                                            c_search_c_t_name(c,j);
                                            cout<<"enter 1 if you want to search another course or 0 to terminate"<<endl;
                                            cin>>w_var;
                                            cin.ignore();
                                        }
                                        break;
                                    }
                                }
                                break;
                            }
                            case 6:
                            case 7:
                            {
                                read_c(c, n);
                                break;

                            }
                            case 8:
                            {
                                write_c(c, n);
                                break;
                            }
                            default:
                            break;
                        }
                        cout<<"enter 1 if you want to perform another task 0 to terminate"<<endl;
                        cin>>w_var;
                        cin.ignore();
                       }
                    }
                default:
                break;
                }
            }
            else
                {
                    cout<<"LOGGIN ERROR : did not match the the registered ADVISOR"<<endl;
                    cout<<"**********ENTER 1 TO DO AGAIN OR 0 TO GET OUT******************"<<endl;
                    cin>>w_var;
                    cin.ignore();
                }
            cout<<"**********ENTER 1 TO DO AGAIN OR 0 TO GET OUT******************"<<endl;
            cin>>w_var;
            cin.ignore();
        }
    }
    else
    {
        cout<<"**********************************************************************************"<<endl;
        cout<<"                    WELCOME TO STUDENT SECTION                         "<<endl;
        w_var=1;
        while(w_var!=0)
        {
            cout<<"<<<<<<<<<<<<<<<<<<<<ENTER USER NAME OR ID TO LOGGIN :"<<endl;
            string t_s_id;
            getline(cin, t_s_id);
            string t_s_pass;
            cout<<"<<<<<<<<<<<<<<<<<<<<ENTER PASSWORD : "<<endl;
            getline(cin, t_s_pass);
            for(int p=0; p<i; p++)
            {
                if(t_s_id==s[p].s_id && t_s_pass==s[p].s_loggin.pass)
                {
                    cout<<">>>>>>>>>>>>>>ACCESS GRANTED<<<<<<<<<<<<<<<<<<"<<endl;
                   w_var=1;
                   while(w_var!=0)
                   {
                        cout<<"ENTER > 1 < TO ADD COURSE "<<endl;
                        cout<<"ENTER > 2 < TO DROP COURSE "<<endl;
                        cout<<"ENTER > 3 < TO SEARCH OFFERED COURSES "<<endl;
                        cout<<"ENTER > 4 < TO DISPLAY ALL THE REGISTERED COURSES"<<endl;
                        cout<<"ENTER > 5 < TO GO BACK "<<endl;
                        cin>>s_var;
                        cin.ignore();
                        switch(s_var)
                        {
                            case 1:
                                {
                                    w_var=1;
                                    while(w_var!=0)
                                    {
                                        //add course
                                        add_c(c, s[p].r_c, j);
                                        cout<<"enter 1 you want to add another course "<<endl;
                                        cin>>w_var;
                                        cin.ignore();
                                    }
                                    break;
                                }
                            case 2:
                                {
                                    w_var=1;
                                    while(w_var!=0)
                                    {
                                        //drop course
                                        remove_c(s[p].r_c, w);
                                        cout<<"enter 1 you want to drop another course "<<endl;
                                        cin>>w_var;
                                        cin.ignore();
                                    }
                                    break;

                                }
                            case 3:
                                {
                                    //search course
                                    //search_c
                                    cout<<"enter >1< to search by course id"<<endl;
                                    cout<<"enter >2< to search by course name"<<endl;
                                    cout<<"enter >3< to search by course teacher name"<<endl;
                                    cin>>s_var;
                                    cin.ignore();
                                    switch(s_var)
                                    {
                                        case 1:
                                        {
                                            //search_c_id
                                            w_var=1;
                                            while(w_var!=0)
                                            {
                                                c_search_id(c,j);
                                                cout<<"enter 1 if you want to do another search or 0 to terminate"<<endl;
                                                cin>>w_var;
                                                cin.ignore();
                                            }
                                            break;
                                        }
                                        case 2:
                                        {
                                            //search_c_name
                                            w_var=1;
                                            while(w_var!=0)
                                            {
                                                c_search_name(c,j);
                                                cout<<"enter 1 if you want to search another course or 0 to terminate"<<endl;
                                                cin>>w_var;
                                                cin.ignore();
                                            }
                                            break;
                                        }
                                        case 3:
                                            {
                                                //search_c_t_name
                                                w_var=1;
                                                while(w_var!=0)
                                                {
                                                    c_search_c_t_name(c,j);
                                                    cout<<"enter 1 if you want to search another course or 0 to terminate"<<endl;
                                                    cin>>w_var;
                                                    cin.ignore();
                                                }
                                                break;
                                            }
                                }
                                break;
                                }
                                case 4:
                                    {
                                        //display_c
                                        w_var=1;
                                        while(w_var!=0)
                                        {
                                            display_r_c(s[p].r_c, w);
                                            cout<<"enter 1 if you want to display again 0 to go back"<<endl;
                                            cin>>w_var;
                                            cin.ignore();
                                        }
                                        break;
                                    }
                                case 5:
                                break;
                            }
                            cout<<"enter 1 to return 0 to logout"<<endl;
                            cin>>w_var;
                        }


                    }
                    else
                        cout<<"login EROR  you entering wrong id or password consult admin"<<endl;
                    break;
                }
                cout<<"press 1 if you want to login again or perform another task "<<endl;
                cin>>w_var;
                cin.ignore();
            }



        }
        cout<<"enter 1 to enter again to home page or o to terminate the program "<<endl;
        cin>>w_var;
        cin.ignore();
    }
    return 0;
}