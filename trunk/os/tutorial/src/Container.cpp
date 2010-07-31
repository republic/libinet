
#include "os/include/Container.h"

using namespace IGame;

void DemoList()
{
    IGame::List<int> l;

    IGame::List<int>::Node* node1 = l.InsertHead(1);
    IGame::List<int>::Node* node2 = l.InsertHead(2);

    IGame::List<int>::Node* node3 = l.InsertTail(4);
    IGame::List<int>::Node* node4 = l.InsertTail(3);

    IGame::List<int>::Node* node = l.AllocNode(100);
    assert(node);
    l.InsertBefore(node2, node);
    l.Remove(node3);
    l.InsertAfter(node4, node3);

    IGame::List<int>::Node* n = l.GetN(2);
    printf("%d\n", n->m_Value);

    for (IGame::List<int>::Node* node = l.Begin();
        node != l.End(); node = l.Next(node))
    {
        printf("%d\n", node->m_Value);
    }
}

void DemoMap()
{
    IGame::Map<int, std::string> m;

    m.Insert(100, "aaaa");
    m.Insert(200, "bbbb");
    m.Insert(400, "cccc");

    printf("%s\n", m[100].c_str());
    printf("%s\n", m[200].c_str());

    printf("size: %d\n", m.Size());

    m.Erase(100);

    IGame::Map<int, std::string>::Node* node;

    for (node = m.Begin(); node != m.End(); node = m.Next(node))
    {
        printf("%d, %s\n", node->m_Key, node->m_Value.c_str());
    }

    node = m.Find(200);
    if (node)
    {
        printf("%s\n", node->m_Value.c_str());
    }
}

void DemoSet()
{
    IGame::Set<std::string> s;

    s.Insert("aaaa");
    s.Insert("bbbb");
    s.Insert("cccc");

    printf("%s\n", s["aaaa"].c_str());
    printf("%s\n", s["bbbb"].c_str());
    printf("%s\n", s["cccc"].c_str());

    printf("size: %d\n", s.Size());

    s.Erase("aaaa");

    IGame::Set<std::string>::Node* node;

    for (node = s.Begin(); node != s.End(); node = s.Next(node))
    {
        printf("%s\n", node->m_Value.c_str());
    }

    node = s.Find("cccc");
    if (node)
    {
        printf("%s\n", node->m_Value.c_str());
    }
}

void DemoPointerArray()
{
    IGame::PointerArray<void*> a;

    _UInt32 i[3] = { 0, 1, 2};

    _UInt32 index = a.Insert(&i[0]);
    a.Insert(index+1, &i[1]);
    a.Insert(index+2, &i[2]);

    printf("%d\n", *(_UInt32*)a[index]);
    printf("%d\n", *(_UInt32*)a[index+1]);
    printf("%d\n", *(_UInt32*)a[index+2]);

    a.Erase(index+1);

    _UInt32 n = *(_UInt32*)a.Find(index+2);
    printf("%d\n", n);
}

void DemoTireTree()
{
    TireTree t;
    t.AddWord("abcd", 1);
    t.AddWord("cdadf", 2);
    t.AddWord("fuck", 3);
    t.AddWord("����", 4);
    t.AddWord("����", 5);
    t.AddWord("����", 6);
    t.AddWord("��b", 7);
    t.AddWord("��B", 8);
    t.AddWord("����", 9);
    t.AddWord("����", 10);
    t.AddWord("��Ů", 11);
    t.AddWord("��ˮ��", 12);
    t.AddWord("��ί", 14);
    t.AddWord("潼�", 15);
    t.AddWord("潸�", 16);
    t.AddWord("����", 17);
    t.AddWord("�ٱ�", 18);
    t.AddWord("�ض�", 19);
    t.AddWord("�ض�", 20);
    t.AddWord("��ʲ", 21);
    t.AddWord("��", 22);
    t.AddWord("���", 23);
    t.AddWord("������", 24);
    t.AddWord("������", 25);
    t.AddWord("��Ƥ", 26);
    t.AddWord("�˾�ѧ��", 27);
    t.AddWord("����", 28);
    t.AddWord("����", 29);
    t.AddWord("Gm", 30);
    t.AddWord("GM", 31);
    t.AddWord("���ǲ���", 32);
    t.AddWord("��ͻ��", 33);
    t.AddWord("����", 34);
    t.AddWord("����", 35);
    t.AddWord("����̨", 36);
    t.AddWord("���㵺", 37);
    t.AddWord("�۹�", 38);
    t.AddWord("��Сƽ", 39);
    t.AddWord("����", 40);
    t.AddWord("��Ѫ��", 41);
    t.AddWord("��Ѫb", 42);
    t.AddWord("��ѪB", 43);
    t.AddWord("��ͳ", 44);
    t.AddWord("������", 45);
    t.AddWord("���ձ��۹�", 46);
    t.AddWord("���Ԫ", 47);
    t.AddWord("�󷨵���", 48);
    t.AddWord("��", 49);
    t.AddWord("������", 50);
    t.AddWord("��Ͷ", 51);
    t.AddWord("����Ա", 52);
    t.AddWord("�߳�", 53);
    t.AddWord("��", 54);
    t.AddWord("��", 55);
    t.AddWord("�b", 56);
    t.AddWord("�B", 57);
    t.AddWord("����", 58);
    t.AddWord("�ؽ�", 59);
    t.AddWord("����", 60);
    t.AddWord("�ɱ�", 61);
    t.AddWord("�ɱ�", 62);
    t.AddWord("��b", 63);
    t.AddWord("��B", 64);
    t.AddWord("������", 65);
    t.AddWord("����m", 66);
    t.AddWord("������", 67);
    t.AddWord("����", 68);
    t.AddWord("����", 69);
    t.AddWord("���ֹ�", 70);
    t.AddWord("����", 71);
    t.AddWord("����", 72);
    t.AddWord("����", 73);
    t.AddWord("��Ʒ", 74);
    t.AddWord("����", 75);
    t.AddWord("����ϯ", 76);
    t.AddWord("������", 77);
    t.AddWord("����", 78);
    t.AddWord("����", 79);
    t.AddWord("��b", 80);
    t.AddWord("��B", 81);
    t.AddWord("������", 82);
    t.AddWord("��Ů", 83);
    t.AddWord("����", 84);
    t.AddWord("����", 85);
    t.AddWord("��Ƭ", 86);
    t.AddWord("�ƻݽ�", 87);
    t.AddWord("�ƾ�", 88);
    t.AddWord("�ʾ�", 89);
    t.AddWord("����ϯ", 90);
    t.AddWord("������", 91);
    t.AddWord("�����", 92);
    t.AddWord("����", 93);
    t.AddWord("������", 94);
    t.AddWord("����", 95);
    t.AddWord("����Ժ", 96);
    t.AddWord("����", 97);
    t.AddWord("����", 98);
    t.AddWord("��ͷ", 99);
    t.AddWord("�ٷ�", 100);

    _UInt32 key1 = t.GetWord("������");
    _UInt32 key2 = t.GetWord("����");
    _UInt32 key3 = t.GetWord("��");
    _UInt32 key4 = t.GetWord("�ٱ�");
    _UInt32 key5 = t.GetWord("���ձ��۹�");
    _UInt32 key6 = t.GetWord("cdadf");
    _UInt32 key7 = t.GetWord("��B");

    printf("%d\n", key1);
}

int main()
{
    DemoList();
    DemoMap();
    DemoSet();
    DemoPointerArray();
    DemoTireTree();
    return 0;
}



