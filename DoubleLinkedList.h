#ifndef LISTOFLISTS_DOUBLELINKEDLIST_H
#define LISTOFLISTS_DOUBLELINKEDLIST_H

#include "Base.h"

/* Структура узла двусвязного списка */
struct NodeDoubleLinkedList {
    std::string line;
    NodeDoubleLinkedList *next;
    NodeDoubleLinkedList *prev;
};

/* Класс двусвязного списка */
class DoubleLinkedList : public Base {
public:
    DoubleLinkedList();

    ~DoubleLinkedList() override;

    const int getType() const override;

    void insert(const std :: string& key) override;;

    void insert(int position, const std :: string& key) override;;

    void insert(Base* list) override;;

    int getSize() const override;;

    void getList(std::ofstream& output) const override;;

    void deleteAll() override;;

    void deleteFrom(int position) override;

private:
    static const char type = 2;
    NodeDoubleLinkedList *head;
    NodeDoubleLinkedList *tail;
    int size;

    std::string deleteKey() override;;
};

#endif //LISTOFLISTS_DOUBLELINKEDLIST_H
