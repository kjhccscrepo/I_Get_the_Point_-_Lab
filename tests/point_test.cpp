#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>
#include "../src/point.hpp"
TEST_CASE( "it can make and print a point" ) {
    cartesian_2d_point Aluber(18, 0);
    REQUIRE( Aluber.getX() == 18 );
    REQUIRE( Aluber.getY() == 0 );
    std::stringstream test_stream;
    test_stream << Aluber;
    REQUIRE( test_stream.str() == "(18, 0)" );
}
TEST_CASE( "it can calculate distance and print it" ) {
    cartesian_2d_point Albaz(18, 0);
    cartesian_2d_point Ecclesia(15, 15);
    std::stringstream test_stream;
    test_stream << (Albaz - Ecclesia) << std::endl;
    REQUIRE( (Albaz - Ecclesia) == 15.29705854077835525 );
    REQUIRE( (Ecclesia - Albaz) == 15.29705854077835525 );
    REQUIRE( test_stream.str() == "15.2971\n" );
}
TEST_CASE( "it can calculate distance and print it, and works with (0, 0)" ) {
    cartesian_2d_point Tragedy(0, 0);
    cartesian_2d_point Comedy(0, 0);
    std::stringstream test_stream;
    test_stream << (Tragedy - Comedy) << std::endl;
    REQUIRE( (Tragedy - Comedy) == 0 );
    REQUIRE( test_stream.str() == "0\n" );
}
TEST_CASE( "It can check is two are the same" ) {
    cartesian_2d_point Fleurdelis(25, 25);
    cartesian_2d_point Luluwalilith(25, 25);
    REQUIRE( Fleurdelis == Luluwalilith );
    REQUIRE( Luluwalilith == Fleurdelis );
    REQUIRE( !(Fleurdelis != Luluwalilith) );
}
TEST_CASE( "It can check is two are different" ) {
    cartesian_2d_point Fleurdelis(25, 25);
    cartesian_2d_point Quem (15, 15);
    REQUIRE( !(Fleurdelis == Quem) );
    REQUIRE( (Fleurdelis != Quem) );
}
TEST_CASE( "It can calculate the midpoint" ) {
    cartesian_2d_point Lubellion(25, 30);
    cartesian_2d_point Albion(25, 20);
    cartesian_2d_point expected_midpoint(25, 25);
    REQUIRE( (Lubellion / Albion) == expected_midpoint );
    cartesian_2d_point MoYe(17, 18);
    cartesian_2d_point Longyuan(12, 23);
    cartesian_2d_point expected_midpoint_2(14.5, 20.5);
    REQUIRE( (Longyuan / MoYe) == expected_midpoint_2 );
}
TEST_CASE( "It can do multiplication" ) {
    cartesian_2d_point Aegirine(-30, 15);
    std::stringstream test_stream;
    test_stream << (Aegirine * -2);
    REQUIRE( test_stream.str() == "(60, -30)" );
}