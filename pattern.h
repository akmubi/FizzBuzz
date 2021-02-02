#if !defined(___PATTERN_H___)
#	define ___PATTERN_H___

#	include "defines.h"

#	define PATTERN_LENGTH 15
#	define PATTERN_COUNT 6

const char pattern_start[] = 
	"1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n";

const uint pattern_const_lengths[] = { 5, 6, 1, 10, 1, 6, 11, 1 };

char pattern10[] =
	"Buzz\n11\nFizz\n13\n14\nFizzBuzz\n16\n17\nFizz\n19\nBuzz\nFizz\n22\n23\nFizz\n" \
	"Buzz\n26\nFizz\n28\n29\nFizzBuzz\n31\n32\nFizz\n34\nBuzz\nFizz\n37\n38\nFizz\n" \
	"Buzz\n41\nFizz\n43\n44\nFizzBuzz\n46\n47\nFizz\n49\nBuzz\nFizz\n52\n53\nFizz\n" \
	"Buzz\n56\nFizz\n58\n59\nFizzBuzz\n61\n62\nFizz\n64\nBuzz\nFizz\n67\n68\nFizz\n" \
	"Buzz\n71\nFizz\n73\n74\nFizzBuzz\n76\n77\nFizz\n79\nBuzz\nFizz\n82\n83\nFizz\n" \
	"Buzz\n86\nFizz\n88\n89\nFizzBuzz\n91\n92\nFizz\n94\nBuzz\nFizz\n97\n98\nFizz\n";

char pattern100[] =
	"Buzz\n101\nFizz\n103\n104\nFizzBuzz\n106\n107\nFizz\n109\nBuzz\nFizz\n112\n113\nFizz\n" \
	"Buzz\n116\nFizz\n118\n119\nFizzBuzz\n121\n122\nFizz\n124\nBuzz\nFizz\n127\n128\nFizz\n" \
	"Buzz\n131\nFizz\n133\n134\nFizzBuzz\n136\n137\nFizz\n139\nBuzz\nFizz\n142\n143\nFizz\n" \
	"Buzz\n146\nFizz\n148\n149\nFizzBuzz\n151\n152\nFizz\n154\nBuzz\nFizz\n157\n158\nFizz\n" \
	"Buzz\n161\nFizz\n163\n164\nFizzBuzz\n166\n167\nFizz\n169\nBuzz\nFizz\n172\n173\nFizz\n" \
	"Buzz\n176\nFizz\n178\n179\nFizzBuzz\n181\n182\nFizz\n184\nBuzz\nFizz\n187\n188\nFizz\n";

char pattern1000[] =
	"Buzz\n1001\nFizz\n1003\n1004\nFizzBuzz\n1006\n1007\nFizz\n1009\nBuzz\nFizz\n1012\n1013\nFizz\n" \
	"Buzz\n1016\nFizz\n1018\n1019\nFizzBuzz\n1021\n1022\nFizz\n1024\nBuzz\nFizz\n1027\n1028\nFizz\n" \
	"Buzz\n1031\nFizz\n1033\n1034\nFizzBuzz\n1036\n1037\nFizz\n1039\nBuzz\nFizz\n1042\n1043\nFizz\n" \
	"Buzz\n1046\nFizz\n1048\n1049\nFizzBuzz\n1051\n1052\nFizz\n1054\nBuzz\nFizz\n1057\n1058\nFizz\n" \
	"Buzz\n1061\nFizz\n1063\n1064\nFizzBuzz\n1066\n1067\nFizz\n1069\nBuzz\nFizz\n1072\n1073\nFizz\n" \
	"Buzz\n1076\nFizz\n1078\n1079\nFizzBuzz\n1081\n1082\nFizz\n1084\nBuzz\nFizz\n1087\n1088\nFizz\n";

char pattern10000[] =
	"Buzz\n10001\nFizz\n10003\n10004\nFizzBuzz\n10006\n10007\nFizz\n10009\nBuzz\nFizz\n10012\n10013\nFizz\n" \
	"Buzz\n10016\nFizz\n10018\n10019\nFizzBuzz\n10021\n10022\nFizz\n10024\nBuzz\nFizz\n10027\n10028\nFizz\n" \
	"Buzz\n10031\nFizz\n10033\n10034\nFizzBuzz\n10036\n10037\nFizz\n10039\nBuzz\nFizz\n10042\n10043\nFizz\n" \
	"Buzz\n10046\nFizz\n10048\n10049\nFizzBuzz\n10051\n10052\nFizz\n10054\nBuzz\nFizz\n10057\n10058\nFizz\n" \
	"Buzz\n10061\nFizz\n10063\n10064\nFizzBuzz\n10066\n10067\nFizz\n10069\nBuzz\nFizz\n10072\n10073\nFizz\n" \
	"Buzz\n10076\nFizz\n10078\n10079\nFizzBuzz\n10081\n10082\nFizz\n10084\nBuzz\nFizz\n10087\n10088\nFizz\n";

char pattern100000[] =
	"Buzz\n100001\nFizz\n100003\n100004\nFizzBuzz\n100006\n100007\nFizz\n100009\nBuzz\nFizz\n100012\n100013\nFizz\n" \
	"Buzz\n100016\nFizz\n100018\n100019\nFizzBuzz\n100021\n100022\nFizz\n100024\nBuzz\nFizz\n100027\n100028\nFizz\n" \
	"Buzz\n100031\nFizz\n100033\n100034\nFizzBuzz\n100036\n100037\nFizz\n100039\nBuzz\nFizz\n100042\n100043\nFizz\n" \
	"Buzz\n100046\nFizz\n100048\n100049\nFizzBuzz\n100051\n100052\nFizz\n100054\nBuzz\nFizz\n100057\n100058\nFizz\n" \
	"Buzz\n100061\nFizz\n100063\n100064\nFizzBuzz\n100066\n100067\nFizz\n100069\nBuzz\nFizz\n100072\n100073\nFizz\n" \
	"Buzz\n100076\nFizz\n100078\n100079\nFizzBuzz\n100081\n100082\nFizz\n100084\nBuzz\nFizz\n100087\n100088\nFizz\n";

char pattern1000000[] =
	"Buzz\n1000001\nFizz\n1000003\n1000004\nFizzBuzz\n1000006\n1000007\nFizz\n1000009\nBuzz\nFizz\n1000012\n1000013\nFizz\n" \
	"Buzz\n1000016\nFizz\n1000018\n1000019\nFizzBuzz\n1000021\n1000022\nFizz\n1000024\nBuzz\nFizz\n1000027\n1000028\nFizz\n" \
	"Buzz\n1000031\nFizz\n1000033\n1000034\nFizzBuzz\n1000036\n1000037\nFizz\n1000039\nBuzz\nFizz\n1000042\n1000043\nFizz\n" \
	"Buzz\n1000046\nFizz\n1000048\n1000049\nFizzBuzz\n1000051\n1000052\nFizz\n1000054\nBuzz\nFizz\n1000057\n1000058\nFizz\n" \
	"Buzz\n1000061\nFizz\n1000063\n1000064\nFizzBuzz\n1000066\n1000067\nFizz\n1000069\nBuzz\nFizz\n1000072\n1000073\nFizz\n" \
	"Buzz\n1000076\nFizz\n1000078\n1000079\nFizzBuzz\n1000081\n1000082\nFizz\n1000084\nBuzz\nFizz\n1000087\n1000088\nFizz\n";

char pattern10000000[] =
	"Buzz\n10000001\nFizz\n10000003\n10000004\nFizzBuzz\n10000006\n10000007\nFizz\n10000009\nBuzz\nFizz\n10000012\n10000013\nFizz\n" \
	"Buzz\n10000016\nFizz\n10000018\n10000019\nFizzBuzz\n10000021\n10000022\nFizz\n10000024\nBuzz\nFizz\n10000027\n10000028\nFizz\n" \
	"Buzz\n10000031\nFizz\n10000033\n10000034\nFizzBuzz\n10000036\n10000037\nFizz\n10000039\nBuzz\nFizz\n10000042\n10000043\nFizz\n" \
	"Buzz\n10000046\nFizz\n10000048\n10000049\nFizzBuzz\n10000051\n10000052\nFizz\n10000054\nBuzz\nFizz\n10000057\n10000058\nFizz\n" \
	"Buzz\n10000061\nFizz\n10000063\n10000064\nFizzBuzz\n10000066\n10000067\nFizz\n10000069\nBuzz\nFizz\n10000072\n10000073\nFizz\n" \
	"Buzz\n10000076\nFizz\n10000078\n10000079\nFizzBuzz\n10000081\n10000082\nFizz\n10000084\nBuzz\nFizz\n10000087\n10000088\nFizz\n";

char pattern100000000[] =
	"Buzz\n100000001\nFizz\n100000003\n100000004\nFizzBuzz\n100000006\n100000007\nFizz\n100000009\nBuzz\nFizz\n100000012\n100000013\nFizz\n" \
	"Buzz\n100000016\nFizz\n100000018\n100000019\nFizzBuzz\n100000021\n100000022\nFizz\n100000024\nBuzz\nFizz\n100000027\n100000028\nFizz\n" \
	"Buzz\n100000031\nFizz\n100000033\n100000034\nFizzBuzz\n100000036\n100000037\nFizz\n100000039\nBuzz\nFizz\n100000042\n100000043\nFizz\n" \
	"Buzz\n100000046\nFizz\n100000048\n100000049\nFizzBuzz\n100000051\n100000052\nFizz\n100000054\nBuzz\nFizz\n100000057\n100000058\nFizz\n" \
	"Buzz\n100000061\nFizz\n100000063\n100000064\nFizzBuzz\n100000066\n100000067\nFizz\n100000069\nBuzz\nFizz\n100000072\n100000073\nFizz\n" \
	"Buzz\n100000076\nFizz\n100000078\n100000079\nFizzBuzz\n100000081\n100000082\nFizz\n100000084\nBuzz\nFizz\n100000087\n100000088\nFizz\n";

const char pattern_end[] =
	"Buzz\n999999991\nFizz\n999999993\n999999994\nFizzBuzz\n999999996\n999999997\nFizz\n999999999\nBuzz\n";

void increase_value(char *string, uint length, uint value)
{
	for (int i = length - 1; i >= 0; --i)
	{
		uint current_digit = value % 10;
		char div = (string[i] - '0' + current_digit) / 10;
		char mod = (string[i] - '0' + current_digit) % 10;

		if (i > 0) string[i - 1] += div;
		string[i] = '0' + mod;
		value /= 10;
	}
}

void increase_values(char *pattern_table, uint num_digits)
{
	uint string_offset = 0;
	for (uint i = 0; i < PATTERN_COUNT; ++i)
	{
		for (uint j = 0; j < sizeof(pattern_const_lengths) / sizeof(uint); ++j)
		{
			string_offset += pattern_const_lengths[j];
			increase_value(&pattern_table[string_offset], num_digits, PATTERN_COUNT * PATTERN_LENGTH);
			string_offset += num_digits;
		}
		/* "\nFizz\n" */
		string_offset += 6;
	}
}

#endif /* ___PATTERN_H___ */