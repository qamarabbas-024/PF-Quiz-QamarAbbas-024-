/*Write a program for a photocopy and print shop. Read N print jobs and number of pages per job.
 Charge 5 per page. If pages > 80 for a job, apply 10% discount to that job’s total. 
Print the final amount for each job and the total sum. Use variables, loops, IO and if/else.*/

#include<iostream>
using namespace std;
int main()
{
    int n, pages ,pageRate = 10;
    float jobTotal = 0, finalTotal = 0;
    cout << "Enter number of print jobs: ";
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        cout << "Enter pages for job "<< i << " : ";
        cin >> pages;
        jobTotal = pages * pageRate;
        if(pages > 80)
        {
            jobTotal = jobTotal-(jobTotal*0.10);

        }
        cout << "Final Amount for job "<< i << " : " << jobTotal << endl ;
        finalTotal = finalTotal+jobTotal;
    
    }
    cout << "Total sum of all jobs: "<< finalTotal <<" Rs"<<endl;

}