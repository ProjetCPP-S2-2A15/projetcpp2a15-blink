#ifndef AIMANAGER_H
#define AIMANAGER_H

#include <QString>
#include <QList>

struct Teacher {
    int id;
    QString name;
    QString subject;
    QString role;
    int assignmentsCount;
};

class AIManager
{
public:
    AIManager();
    QString suggestRole(const Teacher &teacher);
    Teacher suggestTeacherForSubject(const QString &subject, const QList<Teacher> &teachers);
    QList<Teacher> suggestUnderusedTeachers(const QList<Teacher> &teachers, int threshold = 3);
};

#endif // AIMANAGER_H
