#ifndef CLASS
#define CLASS
#include <QString>
#include <QVector>
#include <QApplication>
#include <QDebug>
#include <QMessageBox>
#include <string>
#include <QTimer>
#include <QDateTime>
#include <QVector>
#include <QFile>
#include <QtSql>
#include <QTime>
#include <QMovie>
#include <QMouseEvent>

#include "event_information.h"
#include "user_information.h"
#include "book_information.h"
#include "login.h"
#include "regist.h"
#include "modify.h"
#include "book.h"
#include "event.h"
#include "user.h"
#include "user_display.h"
#include "book_display.h"
#include "log_display.h"
#include "doge.h"
#include "start_moive.h"
#include "borrow_book.h"
using namespace std;

extern User root;
extern QString admin_key;
extern Borrow_book* borrow_window();
extern login* login_window();
extern modify* modify_window();
extern regist* regist_window();
extern user_information* user_window();
extern book_information* book_window();
extern event_information* event_window();
extern user_display* user_display_window();
extern book_display* book_display_window();
extern log_display* log_display_window();
extern void doge_success(QString);
extern void doge_warning(QString);
extern QString make_password(QString PP);
extern QString get_time();

extern bool is_num(QString str);

extern int warning(QString str,int tem = 0);

// database
extern bool create_database();
extern void close_all();
extern void close_window();
extern int book_insert(Book book);
extern int book_modify(Book book);
extern int book_delete(QString id);
extern int search_book_id(Book &book, QString id);
extern int book_search(QVector<Book> &book, QString str, int flag);

extern int user_insert(User user);
extern int user_modify(User user);
extern int user_delete(QString id);
extern int search_user_id(User &user, QString id);
extern int user_search(QVector<User> &user, QString str, int flag);

extern int event_insert(Event event);
extern int event_modify(Event event);
extern int event_delete(int id);
extern int search_event_id(Event &event, QString user_id, QString book_id);
extern int event_search(QVector<Event> &event, QString str, int flag);
extern int get_max_id();

extern int search_event_id(Event &user, QString id);
extern int event_search(QVector<Event> &event, QString str, int flag);

extern int add_book_log(int state, User executor, Book book, User opt);
extern int add_user_log(int state, User executor, User user);
extern int select_log_with_usr_id(QVector<QString>& logs, QString id);
extern int select_log_with_book_id(QVector<QString>& logs, QString id);
extern int select_log_all(QVector<QString>& logs);

extern int compress();

extern int decompress();
/*
extern void get_number();
extern void update_number();
*/
#endif // CLASS
