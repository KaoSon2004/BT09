#include <iostream>
using namespace std;
int Length(char a[])
{
    int i = 0;
    while (*(a+i) != NULL)
        i++;
    return i ;
}

char *DaoNguoc(char str[])
{
    int length = Length(str);
    char *temp = new char[length +1];
    for (int i = 0; i < length; i++)
    {
        *(temp+i)=*(str+length-i-1);
    }
    *(temp+length)=NULL;
    return temp;
}
char * delete_char(char a[],char c)
{
    for (int i=0;i<Length(a);i++)
    {

        if (*(a+i)==c)
        {
            for (int j=i;j<Length(a)-1;j++)
            {
                *(a+j)=*(a+j+1);
            }
            *(a+Length(a) -1) = '\0';
        }

    }
    return a;

}
char * pad_right(char a[],int n)
{
    int l=Length(a);
    if (Length(a)>=n)
    {
            return a;
    }
    else
    {
        char* tmp=new char [Length(a)];
        for (int i=0;i<l;i++)
        {
            *(tmp+i)=*(a+i);
        }
        delete[] a;
        char * a=new char [n];
        for (int i=0;i<l;i++)
        {
            *(a+i)=*(tmp+i);
        }
        for (int i=l;i<n;i++)
        {
            *(a+i)=' ';
        }
        delete[] tmp;
    }
    return a;
}
char * pad_left(char a[],int n )
{
    int l=Length(a);
    if (Length(a)>=n)
    {
        return a;
    }
    else
    {
        char * tmp=new char [Length(a)];
        for (int i=0;i<l;i++)
        {
            *(tmp+i)=*(a+i);
        }
        delete[] a ;
        char * a=new char [n];
        for (int i=0;i<l;i++)
        {
            *(a+i)=' ';
        }
        for (int i=l;i<=n;i++)
        {
            *(a+i)=*(tmp+i-l);
        }
        delete[] tmp;
    }
    return a;
}
char * truncate (char a[],int n)
{
    if (Length(a)<=n)
    {
        return a;
    }
    else
    {
        char *tmp=new char [Length(a)];
        for (int i=0;i<Length(a);i++)
        {
            *(tmp+i)=*(a+i);

        }
        delete[]a;
        char * a=new char [n];
        for (int i=0;i<n;i++)
        {
            *(a+i)=*(tmp+i);
        }
        delete[] tmp;

    }
    return a;
}
int main()
{
    char a[100];
    cin >>a;


   cout <<DaoNguoc(a)<<endl;
   cout <<delete_char(a,'c')<<endl;
    cout <<pad_right(a,15)<<endl;
    cout <<pad_left(a,15)<<endl;
    cout <<truncate(a,5)<<endl;
    return 0;
}
