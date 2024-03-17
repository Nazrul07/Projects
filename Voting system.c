#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

FILE *file;

struct Data1
{
    char Name[50];
    char logo[10];
};
struct Data2
{
    int ID[2];
    int voted[2];

};

void welcomeMessage()
{
    printf("\n\n\n");
    printf("\n\t\t\t                    *------------------*\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                ELECTRONIC                 =");
    printf("\n\t\t\t        =                  VOTING                   =");
    printf("\n\t\t\t        =                 MACHINE                   =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\t\t\t             *Developed by team :Low Expectation*\n");
    printf("\n\t\t\t                    *------------------*\n\n\n\n\n\n\n");

}
void votingday()
{
    printf("\n\n");
    printf("\n\t\t\t                    *------------------*\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                ELECTRONIC                 =");
    printf("\n\t\t\t        =                  VOTING                   =");
    printf("\n\t\t\t        =                 MACHINE                   =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\t\t\t             *Developed by team :Low Expectation*\n");
    printf("\n\t\t\t                    *------------------*\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =           Claim Your Right To             =");
    printf("\n\t\t\t        =               -- Vote --                  =");
    printf("\n\t\t\t        =              Show the power               =");
    printf("\n\t\t\t        =               of Democracy                =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\n\t\t\t\t         Enter Your Voter ID : ");

}
void welcomecandi()
{
    printf("\n\n\n");
    printf("\n\t\t\t                    *------------------*\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                Candidate                  =");
    printf("\n\t\t\t        =                Enrollment                 =");
    printf("\n\t\t\t        =                  Panel                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\t\t\t             *Developed by team :Low Expectation*\n");
    printf("\n\t\t\t                    *------------------*\n\n\n");

}
void voterenroll()
{
    printf("\n\n\n");
    printf("\n\t\t\t                    *------------------*\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                  Voter                    =");
    printf("\n\t\t\t        =                Enrollment                 =");
    printf("\n\t\t\t        =                  Panel                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\t\t\t             *Developed by team :Low Expectation*\n");
    printf("\n\t\t\t                    *------------------*\n\n\n");

}




int main()
{
    struct Data1 candidate[50];
    struct Data2 voter[1000];
    int pass,candidateNumber,voternumber,temp,temp1=0;
    welcomeMessage();
    printf("\t\t\t\t\tEnter Admin Password : ");
    scanf("%d",&pass);
    if(pass == 12345)
    {
        system ("cls");

        file = fopen("VOTING.txt","w");

        welcomecandi();
        printf("\n\n\n\t\t\t\t         Number of Candidates : ");
        scanf("%d",&candidateNumber);

        fprintf(file,"\n\n\n\t\t\t\t         Number of Candidates: %d",candidateNumber);

        for(int i=1; i<=candidateNumber; i++)
        {
            system ("cls");
            welcomecandi();
            if(i%10 == 1)
            {
                printf("\t\t\t\t         %dst Candidates Name : ",i);
                scanf("%s",candidate[i].Name);

                printf("\n\n\t\t\t\t       %dst Candidates logo : ",i);
                scanf("%s",candidate[i].logo);

                fprintf(file,"\n\t\t\t\t         %dst Candidates Name : %s( %s ) ",i,candidate[i].Name,candidate[i].logo);

            }
            else if(i%10 == 2)
            {
                printf("\t\t\t\t         %dnd Candidates Name : ",i);
                scanf("%s",candidate[i].Name);

                printf("\n\n\t\t\t\t      %dnd Candidates logo : ",i);
                scanf("%s",candidate[i].logo);

                fprintf(file,"\n\t\t\t\t         %dnd Candidates Name : %s( %s ) ",i,candidate[i].Name,candidate[i].logo);
            }
            else if(i%10 == 3)
            {
                printf("\t\t\t\t        %drd Candidates Name : ",i);
                scanf("%s",candidate[i].Name);

                printf("\n\n\t\t\t\t       %drd Candidates logo : ",i);
                scanf("%s",candidate[i].logo);

                fprintf(file,"\n\t\t\t\t         %drd Candidates Name : %s( %s ) ",i,candidate[i].Name,candidate[i].logo);

            }
            else
            {
                printf("\t\t\t\t         %dth Candidates Name : ",i);
                scanf("%s",candidate[i].Name);

                printf("\n\n\t\t\t\t        %dth Candidates logo : ",i);
                scanf("%s",candidate[i].logo);

                fprintf(file,"\n\t\t\t\t         %dth Candidates Name : %s( %s ) ",i,candidate[i].Name,candidate[i].logo);
            }

        }
        system ("cls");
        welcomeMessage();
        printf("\t\t\t\t         Number of Voters : ");
        scanf("%d",&voternumber);

        fprintf(file,"\n\t\t\t\t         Number of Voter : %d",voternumber);

        int Votecount[voternumber+1];
        for(int i=1; i<=voternumber; i++)
        {
            system ("cls");
            voterenroll();
            if(i%10 == 1)
            {
                printf("\t\t\t\t         %dst Voter ID : ",i);
                scanf("%d",voter[i-1].ID);

            }
            else if(i%10 == 2)
            {
                printf("\t\t\t\t         %dnd Voter ID : ",i);
                scanf("%d",voter[i-1].ID);

            }
            else if(i%10 == 3)
            {
                printf("\t\t\t\t         %drd Voter ID : ",i);
                scanf("%d",voter[i-1].ID);

            }
            else
            {
                printf("\t\t\t\t         %dth Voter ID : ",i);
                scanf("%d",voter[i-1].ID);
            }
        }
        int i=1,j=1;
        for(int k =1; k<=voternumber; k++)
        {
            Votecount[k]=0;
        }
        while(i<=voternumber)
        {
            temp1=0;
            system ("cls");
            votingday();
            scanf("%d",&temp);
            for(int j=0; j<voternumber; j++)
            {
                if(temp==voter[j].ID[0])
                {
                    temp1=1;
                    fprintf(file,"\nVoter ID: %d",*voter[i-1].ID);
                    i++;
                    voter[j].ID[0]=0;
                    break;
                }
            }

            if(temp1==1)
            {
                system ("cls");
                printf("\n\n\n\n\n\n\n\n\t\t\t         Choose Whom you want to Vote ");
                for(int v=1; v<=candidateNumber; v++)
                {
                    printf("\n\t\t\t\t         %d .%s ( %s ) \n\n",v,candidate[v].Name,candidate[v].logo);
                }
                int z;
                scanf("%d",&z);

                fprintf(file,"\nVoted: Candidate %d\n",z);

                Votecount[z]++;
                printf("\n\n\t\t\t         You have successfully casted your Vote.\n\n\t\t\t\tPress Enter to Continue.... ");
                getch();
            }

            else
            {
                system ("cls");
                printf("\n\n\n\n\n\t\t\t         You have already Voted or not on list ");
                printf("\n\n\n\t\t\t\t         Press Enter to Continue.... ");
                getch();
            }
        }
        system ("cls");
        printf("\n\n\n");
        printf("\n\t\t\t                    *------------------*\n");
        printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\n\t\t\t        =        The Moment We all waiting for      =");
        printf("\n\t\t\t        =                  Has come                 =");
        printf("\n\t\t\t        =          The Result is published          =");
        printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\n\n\t\t\t             *Developed by team :Low Expectation*\n");
        printf("\n\t\t\t                    *------------------*\n\n");

        for(int v=1; v<=candidateNumber; v++)
            fprintf(file,"\n\n\t\t\t         %d .%s ( %s ) Received: %d Votes\n\n",v,candidate[v].Name,candidate[v].logo,Votecount[v]);

        fclose(file);

        for(int v=1; v<=candidateNumber; v++)
            printf("\n\n\t\t\t         %d. %s ( %s ) Received: %d Votes\n\n",v,candidate[v].Name,candidate[v].logo,Votecount[v]);
    }

    else
    {
        printf("\n\n\n\t\t\t\t\t      ! Wrong Password !");
        printf("\n\n\t\t\t\t\t\t Try Again ");
    }

}
