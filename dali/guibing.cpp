#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
 
void merge(int *data,int start,int end,int *result) 
{
    int left_length = (end - start + 1) / 2 + 1;    
    int left_index = start;
    int right_index = start + left_length;
    int result_index = start;
    while(left_index<start + left_length && right_index <end + 1)  //store data into new array
    {
        if(data[left_index] <= data[right_index])
            result[result_index++] = data[left_index++];
        else
            result[result_index++] = data[right_index++];
    }
    while(left_index < start + left_length)
        result[result_index++] = data[left_index++];
    while(right_index <end+1)
        result[result_index++] = data[right_index++];
}
 
void merge_sort(int *data,int start,int end,int *result)
{
    if(1 == end - start)   //last only two elements
    {
        if(data[start] > data[end])
        {
            int temp = data[start];
            data[start] = data[end];
            data[end] = temp;
        }
        return;
    }
    else if (end == start)
        return; //last one element then there is no need to sort;
    else{
        //continue to divide the interval
        merge_sort(data, start, (end - start + 1) / 2 + start, result);
        merge_sort(data, (end - start + 1) / 2 + start + 1, end, result);
        //start to merge sorted data
        merge(data, start, end, result);
        for (int i = start; i <= end;++i)
        {
            data[i] = result[i];
        }
    }
 
}
//example
int main()
{
    int data[] = {5,3,6,7,3,2,7,9,8,6,34,32,5,4,43,12,37};
    int length = 17;
    int result[length];
    cout << "before sorted:"<<'\n';
    for (int i = 0; i < length;i++)
        cout << data[i]<<' ';
    cout << '\n'
         << "after sorted:"<<'\n';
    merge_sort(data, 0, length - 1, result);
    for (int i = 0; i < length;i++)
        cout << result[i]<<' ';
	system("pause");
    return 0;
}