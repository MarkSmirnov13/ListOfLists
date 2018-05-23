#ifndef LISTOFLISTS_RINGDOUBLELINKEDLIST_H
#define LISTOFLISTS_RINGDOUBLELINKEDLIST_H

#include "Base.h"

/* Структура узла кольцевого двусвязного списка */
struct NodeRingDoubleLinkedList {
    std::string line;
    NodeRingDoubleLinkedList *next;
    NodeRingDoubleLinkedList *prev;
};

/* Класс кольцевого двусвязного списка */
class RingDoubleLinkedList : public Base {
public:
    RingDoubleLinkedList();

    ~RingDoubleLinkedList()override;

    const int getType() const override;

    void insert(const std::string &key) override;;

    void insert(int position, const std::string &key) override;;

    void insert(Base *list) override;;

    int getSize() const override;;

    void getList(std::ofstream &output) const override;;

    void deleteAll() override;;

    void deleteFrom(int position) override;

private:
    static const char type = 3;
    NodeRingDoubleLinkedList *head;
    NodeRingDoubleLinkedList *tail;
    int size;

    std::string deleteKey() override;
};

#endif //LISTOFLISTS_RINGDOUBLELINKEDLIST_H
