#include <iostream>

using namespace std;
void diamond(int width);

int main()
{
    diamond(7);
    diamond(8);
    diamond(9);
    return 0;
}

void diamond(int width)
{
    int nWidth = 0;
    if(width%2 !=0)
    {
        nWidth = (width+1)/2;
    }
    int temp = 0;


    while(temp<=nWidth)
    {
        for (int space = nWidth+1; space >temp; space--)
        {
            cout << " ";
        }
        for (int star = 0; star <= temp ; star++)
        {
            cout << "* ";
        }

        cout << endl;
        temp++;
    }
    while(temp >=0)
    {
        for (int space =nWidth+1; space>temp;space --)
        {
            cout << " ";
        }
        for (int j = temp+1; j>0; j--)
        {
            cout << "* ";
        }
        cout << endl;
        temp--;
    }
}




