/*
�۲���ģʽ��Observer����������Ϊ��ģʽ��

�ٸ����ӣ�
	���̵ƣ���ô��ͨ�ƾ����ڼ�ʻԱ�Ĺ۲�Ŀ�ꣻ����ʻԱ���൱�ڹ۲��ߣ�

	������һ�����۲�Ŀ�ꡱ�����кܶ�衰�۲��ߡ���
	�����۲�Ŀ�ꡱ�����仯ʱ����ô���ͻᡰ֪ͨ�����С��۲��ߡ�״̬�����仯�������۲��߾Ϳ���������Ӧ�Ķ�����
	�����ı�Ķ����Ϊ���۲�Ŀ�ꡱ������֪ͨ�Ķ����Ϊ���۲��ߡ���

	�۲�Ŀ��Subject�����ṩһϵ�з��������ӣ�attach����ɾ����detach�����۲��߶��󡱣�ͬʱ�������ˡ�֪ͨ����notify()����
	�۲���Observer���۲��߽��Թ۲�Ŀ��ĸı�������Ӧ���۲���һ�㶨��Ϊ�ӿڣ��ýӿ������˸������ݵķ���update()

*/

#include"Observer.h"
#include"Subject.h"
int main()
{
	Subject* sub = new ConcreteSubject();//����һ�����۲�Ŀ��
    Observer* o1 = new ConcreteObserverA(sub);//ִ���������൱�ڰ�o1,o2��ӵ��۲�Ŀ��Ķ�����ȥ
    Observer* o2 = new ConcreteObserverB(sub);
    sub->SetState("old");//����Ǹı��۲�Ŀ���״̬
    sub->Notify();//������Ҫ֪ͨ�������й۲�����
    sub->SetState("new"); //Ҳ������ Observer ����
    sub->Notify();
	delete o2;
	delete o1;
	delete sub;
    return 0;
}