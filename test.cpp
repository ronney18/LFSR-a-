/*
 * Name: Ronney Sanchez
 * Date: September26
 * Course: COMP2040 Computing IV
 * Assignment: PS2a
 * Email: Ronney_Sanchez@student.uml.edu
 */
// Copyright 2018 Ronney Sanchez
//
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Main
#include <boost/test/included/unit_test.hpp>
#include "./LFSR.hpp"

BOOST_AUTO_TEST_SUITE(Main)
/*This is a five bit string at tap two where it is going to check the
 * bit values for eight steps and determine if the bit values match.
 * Also it is going to check if the result of the generation of eight steps
 * matches. 
 */ 
BOOST_AUTO_TEST_CASE(fiveBitsTapAtTwo) {
  LFSR l("00111", 2);
  BOOST_REQUIRE(l.step() == 1);
  BOOST_REQUIRE(l.step() == 1);
  BOOST_REQUIRE(l.step() == 0);
  BOOST_REQUIRE(l.step() == 0);
  BOOST_REQUIRE(l.step() == 0);
  BOOST_REQUIRE(l.step() == 1);
  BOOST_REQUIRE(l.step() == 1);
  BOOST_REQUIRE(l.step() == 0);
  LFSR l2("00111", 2);
  BOOST_REQUIRE(l2.generate(8) == 198);
}
/*This is a five bit string at tap three where it is going to check the
 * bit values for eight steps and determine if the bit values match.
 * Also it is going to check if the result of the generation of three steps
 * matches. 
 */
BOOST_AUTO_TEST_CASE(fiveBitsTapAtThree) {
  LFSR l3("01011", 3);
  BOOST_REQUIRE(l3.step() == 1);
  BOOST_REQUIRE(l3.step() == 1);
  BOOST_REQUIRE(l3.step() == 1);
  BOOST_REQUIRE(l3.step() == 0);
  BOOST_REQUIRE(l3.step() == 0);
  BOOST_REQUIRE(l3.step() == 0);
  BOOST_REQUIRE(l3.step() == 0);
  BOOST_REQUIRE(l3.step() == 1);
  LFSR l4("01011", 3);
  BOOST_REQUIRE(l4.generate(3) == 7);
}

/*This is a thirty-two bit string at tap two where it is going to check the
 * bit values for eight steps and determine if the bit values match.
 * Also it is going to check if the result of the generation of eight steps
 * matches.
 */
BOOST_AUTO_TEST_CASE(thirtyTwoBitsTapAtTwo) {
  LFSR l5("00110111000011111010101101001100", 2);
  BOOST_REQUIRE(l5.step() == 1);
  BOOST_REQUIRE(l5.step() == 0);
  BOOST_REQUIRE(l5.step() == 1);
  BOOST_REQUIRE(l5.step() == 0);
  BOOST_REQUIRE(l5.step() == 0);
  BOOST_REQUIRE(l5.step() == 0);
  BOOST_REQUIRE(l5.step() == 1);
  BOOST_REQUIRE(l5.step() == 1);
  LFSR l6("00110111000011111010101101001100", 2);
  BOOST_REQUIRE(l6.generate(8) == 163);
}
BOOST_AUTO_TEST_SUITE_END()
