//������ģʽ

/*
������ģʽ(Iterator)��������Ϊ��ģʽ������ģʽ�ṩһ�ַ��������ʡ��ۺ϶��󡱣�
���ۺ϶��󡱣�����ְ��a���洢���ݡ���b���������ݡ���
��ʱ��������ģʽ�����ǽ����������ݡ��Ĺ��ܴӡ��ۺ϶����з����������װ��һ�������������Ķ����С��򻯾ۺ϶��󣬷��ϡ���һְ��ԭ�򡱣�

����������ģʽ��Ӧ���ˡ�����������ģʽ��

		����ۺ��ࣨ����һ������������Iterator�������о���ۺ���̳�֮��
		
		���������������һ�������������̳�֮��������һ���ۺ϶���Aggregate����
*/
#include"Aggregate.h"
#include"Iterator.h"
void main()
{
	Aggregate* AG=new ConcreteAggregate();//��ľۺ���
	Iterator* IT=AG->createiterator();//����һ��������
	for(IT->first();!(IT->isdone());IT->next())//first�����±�0��ʼ��isdone���ǿ���û�г����½磬next�����±��1
	{
		cout<<IT->currentitem()<<" ";
	}
	cout<<endl;
	delete IT;
	delete AG;
}