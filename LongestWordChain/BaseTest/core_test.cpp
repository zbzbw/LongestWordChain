#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Base/core.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BaseTest
{
    TEST_CLASS(CoreTest)
    {
    public:

        TEST_METHOD(GetChainCharTest1)
        {
            // test file exist
            core c;
            char* words[] =
            {
                "algebra",
                "apple",
                "zoo",
                "elephant",
                "under",
                "fox",
                "dog",
                "moon",
                "leaf",
                "trick",
                "pseudopseudohypoparathyroidism"
            };
            char* results[100];
            c.gen_chain_word(words, 11, results, 0, 0, false);
            Assert::AreEqual(results[0], "algebra");
            Assert::AreEqual(results[1], "apple");
            Assert::AreEqual(results[2], "elephant");
            Assert::AreEqual(results[3], "trick");

        }
        TEST_METHOD(GetChainCharTest2)
        {
            // test file exist
            core c;
            char* words[] =
            {
                "element",
                "heaven",
                "table",
                "teach",
                "talk"
            };
            char* results[100];
            c.gen_chain_word(words, 5, results, 0, 0, true);
            Assert::AreEqual(results[0], "table");
            Assert::AreEqual(results[1], "element");
            Assert::AreEqual(results[2], "teach");
            Assert::AreEqual(results[3], "heaven");

        }

    };
}