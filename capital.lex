/***Definition Section has one variable 
which can be accesed inside yylex()
and main ()***/
%{
    int count = 0;
%}

/***Rule Section Has three rules, first rules 
matches with capital letters, second rules
matches with any character expect newline and 
third rule does not take input after the enter ***/
%%
[A-Z] {printf("%s capital letter\n", yytext); 
     count++;}
.    {printf("%s not capital letter\n", yytext);}
\n   {return 0;}
%%

int yywrap(){}
int main(){

    //Explanation:
    //yywrap()-wraps the above rule Section
    /*yyin - takes the file pointer wich contains the input */
    /*yylex()-this is the main flex function wich runs the rule section*/
    //yytext is the text in the buffer

    //Uncomment the lines below
    //to take input from file
    //FILE *fp;
    //char filename[50];
    //printf("Enter the filename: \n");
    //scanf("%s", filename);
    //fp = fopen(filename,"r");
    //yyin =fp;

    yylex();
    printf("\nNumber of Capital letters"
    "in the given input -%d\n", count);

    return 0; 
}