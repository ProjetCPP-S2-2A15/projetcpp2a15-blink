#include "aimanager.h"

AIManager::AIManager() {}

QString AIManager::suggestRole(const Teacher &teacher) {
    if (teacher.subject.toLower() == "mathématiques" || teacher.subject.toLower() == "physique")
        return "Correction";
    else
        return "Surveillance";
}

Teacher AIManager::suggestTeacherForSubject(const QString &subject, const QList<Teacher> &teachers) {
    Teacher bestCandidate;
    int minAssignments = INT_MAX;

    for (const Teacher &t : teachers) {
        if (t.subject.toLower() == subject.toLower() && t.assignmentsCount < minAssignments) {
            bestCandidate = t;
            minAssignments = t.assignmentsCount;
        }
    }

    return bestCandidate;
}

QList<Teacher> AIManager::suggestUnderusedTeachers(const QList<Teacher> &teachers, int threshold) {
    QList<Teacher> result;

    for (const Teacher &t : teachers) {
        if (t.assignmentsCount < threshold)
            result.append(t);
    }

    return result;
}
