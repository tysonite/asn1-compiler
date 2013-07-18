namespace utils_tests
{

BOOST_AUTO_TEST_CASE(UtilsNtos)
{
   BOOST_CHECK_EQUAL(utils::ntos(0), "0");

   BOOST_CHECK_EQUAL(utils::ntos(1), "1");
   BOOST_CHECK_EQUAL(utils::ntos(std::numeric_limits<int64_t>::max()), "9223372036854775807");

   BOOST_CHECK_EQUAL(utils::ntos(-1), "-1");
   BOOST_CHECK_EQUAL(utils::ntos(std::numeric_limits<int64_t>::min()), "-9223372036854775808");
}

}
