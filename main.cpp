#include <iostream>
#include <string>
using namespace std;

void show_array(int x[50], int n = 50){
    int i = 0;
    while (i <= n){
        cout << x[i] << endl;
        i++;
    }
    cout << "End of array" << endl;
}
void show_matrix(int x[50][50], int n = 50, int m = 50){
    int i;
    int j;
    i = 0;
    j = 0;
    while ( i <= n ){
        while ( j <= m ) {
            cout << x[i][j] << endl;
            j++;
        }
        j = 1;
        i++;
    }
    cout << "End of matrix" << endl;
}

void swap_val(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap_array(int (&x)[50], int i, int j){
    int temp;
    temp = x[i];
    x[i] = x[j];
    x[j] = temp;
}
int add1(int x){
    x = x + 1;
    cout << x << endl;
    return x;
}

void add1_R(int &x){
    x = x + 1;
}

void add1_P(int *x){
    *x = *x + 1;
} 

long long fib(long long x){
    if(x<=1){
        return x;
    }else{
        return (fib(x-1)+fib(x-2));

    }
}

int brute_force(int x[50], int n, int s){
    int i;
    int ind; 
    i = 0;
    ind = 1;
    while (i <= n && ind == 1){
        if (x[i]==s){
            ind = 0;
        }
        i++;
    }
    if(ind == 0){
        return i-1;
            } else {
        return -1;
    } 
}

int in_half(int x[50], int n, int s){
    int upper_limit = n;
    int lower_limit = 0;
    int ind = 1;
    int i;
    while( upper_limit - lower_limit > 0 && ind == 1 ){
        i = ( upper_limit + lower_limit )/2;
        if( x[i] == s){
            ind = 0;
        } else if (x[i] > s ) {
            upper_limit--;
        } else {
            lower_limit++;
        }
    }
    if(ind == 0){
        return i;
    } else {
        return -1;
    } 
}

void rep_min(int (&x)[50], int n){
    int i;
    int j;
    int temp;

    i = 0;
    while(i <= n-1){
        j = i + 1;
        while(j <= n){
            if(x[i]>x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int divide_quick(int (&x)[50], int i, int n){
    int a = i;
    int b = i+1;
    while( b <= n ){
        if ( x[b] <= x[i] ){
            a = a + 1;
            swap_array(x, a, b);
        }
        b++;
    }
    swap_array(x, a, i);
    return a;
}  

void quick_sort(int(&x)[50], int i, int n){
    int middle;
    if (n > i){
        if (n - i == 1){
            if(x[i] > x[n]){
                swap_array(x, i, n);
            }
        } else {
            middle = divide_quick(x, i, n);
            quick_sort(x, i, middle-1);
            quick_sort(x, middle+1, n);
        }
    } else {
        return;
    }
}

void bubble(int (&x)[50], int n){
    int ind;
    int i;
    int j;
    i = 0;
    ind = 1;
    while (i < n && ind == 1){
        ind = 0;
        j = 0;
        while(j <= n-i-1){
            if(x[j] > x[j+1]){
                swap_array(x, j, j+1);
                ind = 1;
            }
            j++;
        }
        i++;
    }
}

void insertion(int (&x)[50], int n){
    int i;
    int j;
    i = 1;
    while(i<=n){
        j=i;
        while(j > 1 && x[j]<x[j-1]){
            swap_array(x, j, j-1);
            j--;
        }
        i++;
    }
}

int main(){

    // float/int
    // float x = 4;
    // int y = 3;
    // // int r;
    // float r;


    // r = x/y;

    // cout << "Hello World!" << endl;
    // cout << r << endl;

    //for taylor's series e^x
    // float x;

    // float y = 1;
    // float t = 1;
    // int n = 1;

    // cin >> x;

    // while (t>0.0001 or t<-0.0001){
    //     t = t*x/n;
    //     cout << t << endl;
    //     y = y + t;
    //     n = n + 1;
    // }
    // cout << t << endl;

    // // + - numbers
    // unsigned long long int y = 18446744073709551615;q

    // cout << "end" << endl;
    // cout << y << endl;


    // for taylor's series sin x
    // float x;

    // float y = 1;
    // float t = 1;
    // int n = 1;
    // int c = 4;

    // cin >> x;

    // while (t>0.0001 or t<-0.0001){
    //     t = t*x/n;
    //     y = y + t;
    //     n = n + 1;
    //     if(c == n){
    //         t = t * (-1);
    //         c = c + 4;
    //     }
    // }
    // cout << t << endl;

    //for !
    // int n;
    // int r = 1;
    // cin >> n;
    // for (int i = 1; i<=n; i++){
    //     r = r * i;
    // }
    // cout << r << endl;

    //year checker
    // int year;
    // int result;
    // cin >> year;
    // result = year/4;
    // if(year == result*4){
    //     result = year/100;
    //     if(year == result*100){
    //         result = year/400;
    //         if(year == result*400){
    //             cout << "true" << endl;
    //         }else{
    //             cout << "false" << endl;
    //         }
    //     }else{
    //         cout << "true" << endl;
    //     }
    // }else {
    //     cout << "false" << endl;
    // }

    // colomn and rows check
    // int n;
    // int m;
    // int p = 1;
    // cin >> n;
    // cin >> m;
    // for(int i=1; i<=m; i++){
    //     if(p==1){
    //         while(p<=n){
    //             cout << to_string(p) + ", " + to_string(i) << endl;  
    //             p++;
    //         }
    //         p = n;
    //     }else {
    //         while(p>=1){
    //             cout << to_string(p) + ", " + to_string(i) << endl; 
    //             p--;
    //         }
    //         p = 1;
    //     }
    // }

    //num in char
    // char x;
    // cin >> x;
    // cout << x << endl;

    // prime numbers
    // int x;
    // cin >> x;
    // int control = 1;
    // int i = 2;
    // while (i*i <= x and control==1){
    //     if(x-(x/i)*i == 0){
    //         control = 0;
    //     }
    //     i++;
    // }
    // if(control==1){
    //     cout << "true" << endl;
    // } else {
    //     cout << "false" << endl;
    // }

    //refrence
    // int x;
    // cout << "Please enter a number" << endl;
    // cin >> x;
    // cout << "Start" << endl;
    // add1(x);
    // cout << x << endl;
    // add1_R(x);
    // cout << x << endl;
    // add1_P(&x);
    // cout << x << endl;

    //check for string in a string
    // string str1;
    // string str2;
    // int i;
    // int c;
    // int k;
    // int f;
        
    // i = 1;
    // c = 1;
    // k = 1;
    // f= 0;

    // getline(cin, str1);
    // getline(cin, str2);


    // while ( str1[i] != '\0' && f == 0){
    //     k = 1;
    //     c = i;
    //     while (str2[k] != '\0' && str1[c] != '\0' && str1[c] == str2[k]){
    //         k++; 
    //         c++;
    //     }
    //     if (str2[k] == '\0'){
    //         f = 1;
    //     }
    //     i++;
    // }
    // if (f == 1){
    //     cout << i;
    // } else {
    //     cout << "None";
    // }
    
    //transpose matrix
    // int i;
    // int k;
    // int n;
    // int m;
    // int ma[50][50];
    // int mb[50][50];
    // cin >> n;
    // cin >> m;
    // i = 1;
    // k = 1;
    // cout << "enter matrix" << endl;
    // while (i <= n){
    //     while (k <= m){
    //         cin >> ma[i][k];
    //         k++;
    //     }
    //     k = 1;
    //     i++;
    // }
    // i = 1;
    // k = 1;
    // while(i <= n){
    //     while(k <= m){
    //         mb[k][i] = ma[i][k];
    //         k++;
    //     }
    //     i++;
    //     k = 1;
    // }
    // i = 1;
    // k = 1;
    // cout << "transpose" << endl;
    // while(i <= m){
    //     while(k <= n){
    //         cout << mb[i][k] << endl;
    //         k++;
    //     }
    //     i++;
    //     k = 1;
    // }

    //fibonacci numbers
    // int x;
    // cin >> x;
    // cout << fib(x) << endl;

    //double char in same string
    // char c;
    // char s[50];
    // int i;
    // int j;
    // int k;
    // cout << "Enter string:" << endl;
    // cin >> s;
    // cout << "Enter char:" << endl;
    // cin >> c;
    
    // i = 0;
    
    // //check for length
    // while(s[i] != '\0'){
    //     i++;
    // }
    // //i for length of string
    // i = i - 1;
    // //j for position
    // j = 0;
    // while(j<=i){
    //     if(s[j]==c){
    //         //if equal setting index to the end of string to start copying from end
    //         k = i;
    //         while(k>=j){
    //             //copying last char to the next position as long as index doesn't hit the position where j is currently
    //             s[k+1] = s[k];
    //             //going one position back to keep copying
    //             k--;
    //         }
    //         //copying is done 2 position forward because of doubled char
    //         j=j+2;
    //         //increasing i beacuse length has changed
    //         i++;
    //     }else{
    //         //normally going one position up
    //         j++;
    //     }
    // }
    // s[i+1]= '\0';
    // cout << "Results:" << endl;
    // cout << s << endl;

    //checking for specal char
    // char s[50];
    // int ind;
    // int i;

    // cin >> s;

    // i = 0;
    // ind = 0;

    // while (s[i] != '\0' && ind==0){
    //     if ((s[i]<'A' || s[i] > 'Z') && (s[i]<'a' || s[i]>'z') && (s[i]<'0' || s[i]>'9')){
    //         ind = 1;
    //     }
    //     i++;
    // }
    
    // cout << ind << endl;
    
    // //same stirng form start and back
    // int i;
    // int j;
    // int br;
    // char s[50];
    // cin >> s;

    // i = 0;
    // while (s[i] != '\0'){
    //     i++;
    // }

    // br = 0;
    // i--;
    // j = i;
    // i = 0;

    // while(s[i] != '\0'){
    //     if(s[i] != s[j]){
    //         br++;
    //     }
    //     j--;
    //     i++;
    // }

    // cout << s << endl;
    // cout << br << endl;

    //add nunmbers in string
    // int i;
    // int j;
    // int c1;
    // int c2;
    // int c3;
    // int p;
    // int max;
    // int max2;
    // char n1[50];
    // char n2[50];
    // char n3[50];

    // cin >> n1;
    // cin >> n2;

    // i = 0; 
    // while (n1[i] != '\0'){
    //     i++;
    // }
    // i = i - 1;

    // j = 0;
    // while (n2[j] != '\0'){
    //     j++;
    // }
    // j = j - 1;
    
    // if(i > j){
    //     max = i;
    // } else if(i < j) {
    //     max = j;
    // } else {
    //     max = i;
    // }

    // max2 = max;
    // p = 0;
    // while( i > -1 && j > -1){
        
    //     c1 = int(n1[i]) - int('0');
    //     c2 = int(n2[j]) - int('0');
    //     c3 = c1 + c2 + p;
    //     p = c3/10;
    //     c3 = c3-(c3/10)*10;
    //     c3 = char(c3) + '0';
    //     n3[max+1] = c3;
    //     i--;
    //     j--;
    //     max--;
    // }
    // if(i > j){
    //     while (i > -1){
    //         c1 = int(n1[i]) - int('0');
    //         c3 = c1 + p;
    //         p = c3/10;
    //         c3 = c3 - (c3/10)*10;
    //         c3 = char(c3) + '0';
    //         n3[max+1] = c3;
    //         max--;
    //         i--;
    //     }
    // } else if(i < j){
    //     while(j > -1) {
    //         c1 = int(n2[j]) - int('0');
    //         c3 = c1 + p;
    //         p = c3/10;
    //         c3 = c3 - (c3/10)*10;
    //         c3 = char(c3) + '0';
    //         n3[max+1] = c3;
    //         max--;
    //         j--;
    //     }
    // }
    // i = 0;
    // if(p == 0){
    //     while (i <= max2){
    //         n3[i] = n3[i+1];
    //         i++;
    //     }
    //     n3[max2+1] = '\0';
    // } else {
    //     n3[max + 1] = char(p) + '0';
    //     n3[max2 + 2] = '\0';
    // }
    
    // cout<< n3 << endl;    

    //to uppercase
    // char s[50];
    // int i;
    // int upper;
    // cin >> s;
    // i = 0;
    // upper = int('a') - int('A');
    // while (s[i] != '\0'){
    //     if (s[i]>='a' && s[i]<='z'){
    //         s[i] = char(int(s[i]) - upper);
    //     }
    //     i++;
    // }
    // cout << s << endl;

    //sqrroot
    // float x;
    // float g;
    // float h;

    // cin >> x;
    // g = x/2;
    // h = x/g;

    // while(g - h > 0.0001 || h - g > 0.0001){
    //     g = (g+h)/2;
    //     h = x/g;
    // }

    // cout << int(g) << endl;

    //matrix of chars
    // char s[50][50];
    // int i;
    // int n;
    // cin >> n;
    // i = 0;
    // while (i <= n){
    //     cin >> s[i];
    //     i++;
    // }
    // i = 0;
    // while (i <= n){
    //     cout << s[i] << endl;
    //     i++;
    // }

    //for search and sort unsorted
    // int x_u[50] = { 2, 4, 7, 9, 8, 11, 5, 25, 16, 78, 54, 32, 89 };

    //for search and sort half sorted
    // int x_h[50] = { 2, 4, 7, 9, 11, 12, 25, 16, 78, 54, 32, 19, 14 };

    //for search and sort sorted
    // int x_s[50] = { 2, 4, 7, 9, 11, 12, 25, 35, 46, 58, 64, 72, 89 };
    
    //for functions
    // int n = 12;
    // int s;
    // cin >> s;

    //burte froce
    // cout << brute_force(x_u, n, s) << endl;

    //search by cutting in half for sorted array
    // cout << in_half(x_s, n, s) << endl;
    
    //repeated minimum
    // rep_min(x_h, n);
    // show_array(x_h, n);

    //quick sort
    // quick_sort(x_u, 0, n);
    // show_array(x_u, n);
    
    //bubble
    // bubble(x_h, n);
    // show_array(x_h, n);

    //insertion
    // insertion(x_h, n);
    // show_array(x_h, n);
    

    return 0;
}