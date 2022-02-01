#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

class Playfare
{
    unordered_map<char, vector<int>> table;
    vector<char> matrix_1d;
    char matrix_2d[5][5];
    int x1,y1,x2,y2;
    int i, j;

    // Helper Function
    bool present(char target)
    {
        for(auto elm : matrix_1d)
        {
            if(target == elm)
            {
                return true;
            }
        }
        return false;
    }

    string refine_key(string input)
    {
        for(auto elm : input)
        {
            if(elm == 'Z')
            {
                elm == 'Y';
            }
        }

        return input;
    }
    
    string refine_plain_text(string input)
    {
        string result = "";

        // For same adjacent element
        for(int i=0; i<input.size(); i++)
        {
            if(input[i] == input[i+1])
            {
                result+=input[i];
                
                if(input[i] == 'X')
                {
                    result+='Y';
                }
                else
                {
                    result+='X';
                }
            }
            else
            {
                result+=input[i];
            }

        }
        
        // For Z element
        for(auto elm: input)
        {
            if(elm == 'Z')
            {
                elm == 'Y';
            }
        }

        // For odd length
        if(result.size()%2!=0)
        {
            if(result[result.size()-1] == 'X')
            {
                result+='Y';
            }
            else
            {
                result+='X';
            }
        }
        return result;
    }

    void get_2d_matrix()
    {
        for(int k=0; k<25; k++)
        {
            i=k/5;
            j=k%5;

            matrix_2d[i][j] = matrix_1d[k];

            // Adding Element to Table
            table[matrix_1d[k]] = {i,j};
        }
    }

    // Rule    
    bool row_rule()
    {
        if(x1==x2)
        {
            y1++;
            y2++;

            if(y1==5)
            {
                y1=0;
            }

            if(y2==5)
            {
                y2=0;
            }
            return true;
        }
        return false;
    }

    bool column_rule()
    {
        if(y1==y2)
        {
            x1++;
            x2++;

            if(x1==5)
            {
                x1=0;
            }

            if(x2==5)
            {
                x2==0;
            }

            return true;
        }
        return false;
    }

    bool rectangle_rule()
    {
        if(!row_rule() and !column_rule())
        {
            int i2 = y1;
            y1 = y2;
            y2 = i2;

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

            x1 = table[elm1][0];
            y1 = table[elm1][1];

            x2 = table[elm2][0];
            y2 = table[elm2][1];

            /*
            cout<<"\nBefore\n";
            cout<<"X1: "<<x1<<" Y1: "<<y1;
            */

            rule();

            result+=matrix_2d[x1][y1];
            result+=matrix_2d[x2][y2];

            /*
            cout<<"\nAfter\n";
            cout<<"X1: "<<x1<<" Y1: "<<y1;
            */
        }

        cout<<"\nCipher Text: "<<result;
    }
    
    // Print
    void print_1d()
    {
        cout<<"\n1 D Matrix\n";

        for(auto elm : matrix_1d)
        {
            cout<<elm<<" ";
        }

        cout<<"\n";
    }

    void print_2d()
    {
        cout<<"\n\n2 D Matrix\n";

        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout<<matrix_2d[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
};

int main()
{
    string key = "";
    string plain_text = "";

    
    cout<<"Key: ";
    cin>>key;

    cout<<"Plain Text: ";
    cin>>plain_text;
    

    Playfare p;

    p.get_key(key);
    p.cipher(plain_text);
    p.print_2d();
    return 0;
}