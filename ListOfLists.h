#ifndef LISTOFLISTS_LISTOFLISTS_H
#define LISTOFLISTS_LISTOFLISTS_H

#include "SimplyLinkedList.h"
#include "RingSimplyLinkedList.h"
#include "DoubleLinkedList.h"
#include "RingDoubleLinkedList.h"

/* Структура узла списка списков */
struct NodeListOfLists {
    Base *head;            // Указатель на голову вложенного списка
    NodeListOfLists *next; // Указатель на следующий узел структуры
    NodeListOfLists *prev; // Указатель на предыдущий узел структуры
};

/* Класс списка списков */
class ListOfLists {
public:
    ListOfLists();

    void insert(Base* list);

    void insert(int position, Base* list);

    void insert(int position, int positionList, const std :: string& key);

    void getList(std::ofstream& output) const;

    void deleteFrom(int position, int positionList);

    void deleteAll(int position);

private:
    size_t size;
    NodeListOfLists *head;
};

void Interpreter(std::ifstream&, ListOfLists&, std::ofstream&);

#endif //LISTOFLISTS_LISTOFLISTS_H
