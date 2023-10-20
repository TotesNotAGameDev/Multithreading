#pragma once
#include <vector>
#include <iostream>
#include <thread>

int mThreadCount = 0;

static void ThreadCounter();

void NumberRun(std::vector<int> num);

int main();