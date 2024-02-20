/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015,
 * Nisarg Bharucha - 100820217 
 * Shiv Patel - 100818727
 * Joshua Cardoz - 100827231
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "questions.h"

void initialize_game(void) {
    // Programming category
    strcpy(questions[0].category, "programming");
    strcpy(questions[0].question, "What is a pointer in C?");
    strcpy(questions[0].answer, "A variable that stores the memory address of another variable.");
    questions[0].value = 100;
    questions[0].answered = false;

    strcpy(questions[1].category, "programming");
    strcpy(questions[1].question, "What is the difference between '++i' and 'i++' in C++?");
    strcpy(questions[1].answer, "'++i' increments the value of i before using it, while 'i++' uses the value of i and then increments it.");
    questions[1].value = 200;
    questions[1].answered = false;

    strcpy(questions[2].category, "programming");
    strcpy(questions[2].question, "What is object-oriented programming?");
    strcpy(questions[2].answer, "A programming paradigm based on the concept of objects, which can contain data in the form of fields and code in the form of procedures.");
    questions[2].value = 300;
    questions[2].answered = false;

    // Algorithms category
    strcpy(questions[3].category, "algorithms");
    strcpy(questions[3].question, "What is a binary search?");
    strcpy(questions[3].answer, "A search algorithm that finds the position of a target value within a sorted array.");
    questions[3].value = 100;
    questions[3].answered = false;

    strcpy(questions[4].category, "algorithms");
    strcpy(questions[4].question, "What is the traveling salesman problem?");
    strcpy(questions[4].answer, "A problem in which a salesman has to visit all given cities and return to the starting city while minimizing the total distance traveled.");
    questions[4].value = 200;
    questions[4].answered = false;

    strcpy(questions[5].category, "algorithms");
    strcpy(questions[5].question, "What is the time complexity of bubble sort?");
    strcpy(questions[5].answer, "O(n^2)");
    questions[5].value = 300;
    questions[5].answered = false;

    // Databases category
    strcpy(questions[6].category, "databases");
    strcpy(questions[6].question, "What is normalization in databases?");
    strcpy(questions[6].answer, "The process of organizing the attributes and tables of a relational database to minimize redundancy and dependency.");
    questions[6].value = 100;
    questions[6].answered = false;

    strcpy(questions[7].category, "databases");
    strcpy(questions[7].question, "What is SQL injection?");
    strcpy(questions[7].answer, "A code injection technique that exploits a security vulnerability in a website's software.");
    questions[7].value = 200;
    questions[7].answered = false;

    strcpy(questions[8].category, "databases");
    strcpy(questions[8].question, "What is ACID in database transactions?");
    strcpy(questions[8].answer, "A set of properties that guarantee database transactions are processed reliably.");
    questions[8].value = 300;
    questions[8].answered = false;

    // Set the value for the last question
    questions[8].value = 300;
}


void display_categories(void) {
    printf("Categories:\n");
    for (int i = 0; i < NUM_CATEGORIES; ++i) {
        printf("%s\n", categories[i]);
    }
}

void display_question(char *category, int value) {
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        if (strcmp(questions[i].category, category) == 0 && questions[i].value == value) {
            printf("Category: %s\n", questions[i].category);
            printf("Question for $%d: %s\n", questions[i].value, questions[i].question);
            return;
        }
    }
}

bool valid_answer(char *category, int value, char *answer) {
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        if (strcmp(questions[i].category, category) == 0 && questions[i].value == value) {
            questions[i].answered = true;
            return strcmp(questions[i].answer, answer) == 0;
        }
    }
    return false; // Question not found
}

bool already_answered(char *category, int value) {
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        if (strcmp(questions[i].category, category) == 0 && questions[i].value == value) {
            return questions[i].answered;
        }
    }
    return true; // Question not found
}

