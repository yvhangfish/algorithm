//
// Created by Administrator on 2019/5/3.
//
#include <iostream>
using namespace std;

void bfs(int step);

const int NUM_OF_BOX = 3;
int a[NUM_OF_BOX + 1];
int book[NUM_OF_BOX + 1];
int total_rank = 0;
int bfs_cnt = 0;

int main()
{
    bfs(1);
    cout << "total_rank: " << total_rank << endl;
    cout << "bfs_cnt: " << bfs_cnt << endl;

    return 0;
}

void bfs(int step)
{
    bfs_cnt++;
    if (step > NUM_OF_BOX)
    {
        for (int i = 1; i <= NUM_OF_BOX; i++)
        {
            cout << a[i];
        }
        cout << endl;
        total_rank++;
        return;
    }

    for (int i = 1; i <= NUM_OF_BOX; i++)
    {
        if (book[i] == 0)
        {
            a[step] = i;
            book[i] = 1;
            bfs(step + 1);
            book[i] = 0;
        }
    }
    return;
}



