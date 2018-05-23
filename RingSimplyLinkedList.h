#ifndef LISTOFLISTS_RINGSIMPLYLINKEDLIST_H
#define LISTOFLISTS_RINGSIMPLYLINKEDLIST_H

#include "Base.h"

/* Структура узла кольцевого односвязного списка */
struct NodeRingSimplyLinkedList {
    std::string line;
    NodeRingSimplyLinkedList *next;
};

/* Класс кольцевого односвязного списка */
class RingSimplyLinkedList : public Base {
public:
    RingSimplyLinkedList();

    ~RingSimplyLinkedList() override;

    const int getType() const override;

    void insert(const std::string &key) override;

    void insert(int position, const std::string &key) override;

    void insert(Base* list) override;;

    int getSize() const override;;

    void getList(std::ofstream& output) const override;;

    void deleteFrom(int position) override;

    void deleteAll() override;;

private:
    static const char type = 1;
    NodeRingSimplyLinkedList *head;
    NodeRingSimplyLinkedList *tail;
    int size;

    std::string deleteKey() override;;
};

#endif //LISTOFLISTS_RINGSIMPLYLINKEDLIST_H
