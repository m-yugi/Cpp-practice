#include<iostream>
#include<unordered_map>
#include<vector>

using std::cin;
using std::cout;
using std::vector;
using std::unordered_map;
using std::string;
class Playfare
{
    unordered_map<char, vector<int>> table;
    vector<char> matrix_1d;
    char matrix_2d[5][5];
    int X1,Y1,X2,Y2;
    int i, j;

    // Helper Function
    bool present(char num)
    {
        for(char i : matrix_1d)
        {
            if(num == i)
            {
                return true;
            }
        }
        return false;
    }

    string refine_key(string num)
    {
        for(char i : num)
        {
            if(i == 'Z')
            {
                i == 'Y';
            }
        }

        return num;
    }
    
    string refine_plain_text(string num)
    {
        string res = "";

        // For same adjacent element
        for(int i=0; i<num.size(); i++)
        {
            if(num[i] == num[i+1])
            {
                res+=num[i];
                
                if(num[i] == 'X')
                {
                    res+='Y';
                }
                else
                {
                    res+='X';
                }
            }
            else
            {
                res+=num[i];
            }

        }
        
        // For Z element
        for(char i: num)
        {
            if(i == 'Z')
            {
                i == 'Y';
            }
        }

        // For odd length
        if(res.size()%2!=0)
        {
            if(res[res.size()-1] == 'X')
            {
                res+='Y';
            }
            else
            {
                res+='X';
            }
        }
        return res;
    }

    void get_2d_matrix()
    {
        for(int m=0; m<25; m++)
        {
            i=m/5;
            j=m%5;

            matrix_2d[i][j] = matrix_1d[m];

            // Adding Element to Table
            table[matrix_1d[m]] = {i,j};
        }
    }

    // Rule    
    bool row_rule()
    {
        if(X1==X2)
        {
            Y1++;
            Y2++;

            if(Y1==5)
            {
                Y1=0;
            }

            if(Y2==5)
            {
                Y2=0;
            }
            return true;
        }
        return false;
    }

    bool column_rule()
    {
        if(Y1==Y2)
        {
            X1++;
            X2++;

            if(X1==5)
            {
                X1=0;
            }

            if(X2==5)
            {
                X2==0;
            }

            return true;
        }
        return false;
    }

    bool rectangle_rule()
    {
        if(!row_rule() and !column_rule())
        {
            int i2 = Y1;
            Y1 = Y2;
            Y2 = i2;

            return true;
        }
        return false;
    }

    void rule()
    {
        if(row_rule());
        else if(column_rule());
        else(rectangle_rule());
    }

    public:

    string get_key(string input)
    {
        input = refine_key(input);

        for(auto elm : input)
        {
            if(!present(elm))
            {
                matrix_1d.push_back(elm);
            }
        }

        for(char i = 65; i<90; i++)
        {
            if(!present(i))
            {
                matrix_1d.push_back(i);
            }
        }
        return input;
    }

    void cipher(string input)
    {
        input = refine_plain_text(input);

        cout<<"\nRefine Plain Text: "<<input;

        string result = "";

        get_2d_matrix();

        for(int i=0; i<input.size(); i+=2)
        {
            char elm1 = input[i];
            char elm2 = input[i+1];

            X1 = table[elm1][0];
            Y1 = table[elm1][1];

            X2 = table[elm2][0];
            Y2 = table[elm2][1];

            /*
            cout<<"\nBefore\n";
            cout<<"X1: "<<x1<<" Y1: "<<y1;
            */

            rule();

            result+=matrix_2d[X1][Y1];
            result+=matrix_2d[X2][Y2];

            /*
            cout<<"\nAfter\n";
            cout<<"X1: "<<x1<<" Y1: "<<y1;
            */
        }

        cout<<"\nthis is Cipher Text: "<<result;
    }
    
    // Print
    // void print_1d()
    // {
    //     cout<<"\n1 D Matrix\n";

    //     for(auto elm : matrix_1d)
    //     {
    //         cout<<elm<<" ";
    //     }

    //     cout<<"\n";
    // }

    // void print_2d()
    // {
    //     cout<<"\n\n2 D Matrix\n";

    //     for(int i=0; i<5; i++)
    //     {
    //         for(int j=0; j<5; j++)
    //         {
    //             cout<<matrix_2d[i][j]<<" ";
    //         }
    //         cout<<"\n";
    //     }
    //     cout<<"\n";
    // }
};

int main()
{
    string key = "";
    string plain_text = "";

    
    cout<<"Please enter the Key: ";
    cin>>key;

    cout<<"Please enter the Plain Text: ";
    cin>>plain_text;
    

    Playfare p;

    p.get_key(key);
    p.cipher(plain_text);
    //p.print_2d();
    return 0;
}