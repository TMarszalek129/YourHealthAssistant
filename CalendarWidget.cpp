//
// Created by lenovo on 07.07.2025.
//

#include "CalendarWidget.h"



CalendarWidget::CalendarWidget(const QString &title,QWidget *parent) : QGroupBox(title,parent) {
  calendar = new QCalendarWidget();

  calendar->setMinimumDate(QDate(1900, 1, 1));
  calendar->setMaximumDate(QDate(3000, 1, 1));
  calendar->setGridVisible(true);



  // connect(calendar, &QCalendarWidget::currentPageChanged, this, &CalendarWidget::reformatCalendarPage);


}

void CalendarWidget::reformatCalendarPage()
{
  QTextCharFormat mayFirstFormat;
  const QDate mayFirst(calendar->yearShown(), 5, 1);

  QTextCharFormat firstFridayFormat;
  QDate firstFriday(calendar->yearShown(), calendar->monthShown(), 1);
  while (firstFriday.dayOfWeek() != Qt::Friday)
    firstFriday = firstFriday.addDays(1);

  // if (firstFridayCheckBox->isChecked()) {
  //   firstFridayFormat.setForeground(Qt::blue);
  // } else { // Revert to regular colour for this day of the week.
  //   Qt::DayOfWeek dayOfWeek(static_cast<Qt::DayOfWeek>(firstFriday.dayOfWeek()));
  //   firstFridayFormat.setForeground(calendar->weekdayTextFormat(dayOfWeek).foreground());
  // }
  //
  // calendar->setDateTextFormat(firstFriday, firstFridayFormat);
  //
  // // When it is checked, "May First in Red" always takes precedence over "First Friday in Blue".
  // if (mayFirstCheckBox->isChecked()) {
  //   mayFirstFormat.setForeground(Qt::red);
  // } else if (!firstFridayCheckBox->isChecked() || firstFriday != mayFirst) {
  //   // We can now be certain we won't be resetting "May First in Red" when we restore
  //   // may 1st's regular colour for this day of the week.
  //   Qt::DayOfWeek dayOfWeek(static_cast<Qt::DayOfWeek>(mayFirst.dayOfWeek()));
  //   calendar->setDateTextFormat(mayFirst, calendar->weekdayTextFormat(dayOfWeek));
  // }

  // calendar->setDateTextFormat(mayFirst, mayFirstFormat);
}


