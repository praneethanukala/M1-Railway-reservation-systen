/**
 * @file bus_operations.h
 * @author harish D (harish.d.2018.ece@ritchennai.edu.in)
 * @brief Header file for railway reservation system
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _railway_OPERATIONS_H_
#define _railway_OPERATIONS_H_

/**
 * @brief LIST OF railway
 * @return SHOW LIST OF railway AVALIABLE
 */
void railway();

/**
 * @brief NUMBER OF SEATS AVAILIABLE
 * @return SHOW NUMBER OF SEATS AVAILIABLE
 */
void book();

/**
 * @brief ENTER NAME
 * @return DISPLAY NAME
 */
void name_n0();

/**
 * @brief SELECTING A SEAT 
 * @return CHOOSING SEATS
 */
int read_n0();

/**
 * @brief CONFIRMATION OF TICKET 
 * @return SHOWS PASSENGER TICKET DEATILS
 */
void read_name();

/**
 * @brief LOCK THE SEAT 1
 * @return CONFIRMATION OF SEATING ALLOTMENT 1
 */
void status();

/**
 * @brief LOCK THE SEAT 2
 * @return CONFIRMATION OF SEATING ALLOTMENT 2
 */
void status_1();

/**
 * @brief   CANCELLING TICKET 
 * @return TICKET CANCELLATION
 */
void cancel();

/**
 * @brief USER LOGIN
 * @return USER INFORMATION
 */
void login();

#endif /* #define _railway_RESERVATION_SYSTEM_H_ */