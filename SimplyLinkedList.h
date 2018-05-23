#ifndef LISTOFLISTS_SIMPLYLINKEDLIST_H
#define LISTOFLISTS_SIMPLYLINKEDLIST_H

#include "Base.h"

/*  Структура узла односвязного списка */
struct NodeSimplyLinkedList {
    std::string line;
    NodeSimplyLinkedList *next;
};

/* Класс односвязного списка */
class SimplyLinkedList : public Base {
public:
    SimplyLinkedList();

    ~SimplyLinkedList() override;

    const int getType() const override;

    void insert(const std::string &key) override;

    void insert(int position, const std::string &key) override;

    void insert(Base* list) override {
        auto * tmp = dynamic_cast<SimplyLinkedList*>(list);

        tail->next = tmp->head;
        tail = tmp->tail;
        size += tmp->size;
    }

    int getSize() const override;

    void getList(std::ofstream& output) const override;

    void deleteFrom(int position) override;

    void deleteAll() override;;

private:
    static const char type = 0;
    NodeSimplyLinkedList* head;
    NodeSimplyLinkedList* tail;
    int size;

    std::string deleteKey() override {
        std::string tmp = head->line;
        NodeSimplyLinkedList* t = head;
        head = head->next;
        tail = nullptr;
        delete t;
        size--;
        return tmp;
    }
};

#endif //LISTOFLISTS_SIMPLYLINKEDLIST_H
