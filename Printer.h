#pragma once

class Printer {
private:
    Queue queue;
public:
    void request(Worker* worker) {
        queue.enqueue(worker);
    }

    void start() {
        while (!queue.isEmpty()) {
            Worker* currentWorker = queue.front();
            cout << currentWorker->getFullName()
                << currentWorker->getAge()
                << " ( id: " << currentWorker->getId() << ") "
                << "printing " << currentWorker->getPageCount() << " pages... completed"
                << endl;
            queue.dequeue();
        }
    }
};