#ifndef DIALOG_H
#define DIALOG_H

//0 = K, 1 = Deckard (YOUNG), 2 = Custom Human, 3 = Custom Replicant, 4 = Custom Indeterminate
#define userSelect 0
//0 = WALLACE CORP REPLICANT, 1 = TYRELL CORP REPLICANT. Only used if User is Replicant.
#define replicantType 0

char const nameK[]  = "K D6-3.7";
char const nameDeckard[]  = "DECKARD, RICK";
char const nameCustom[]  = "FLAKES, BRAN";

const char* const userName[]  = {nameK, nameDeckard, nameCustom, nameCustom, nameCustom};

char const userDescReplicant[]  = "NEXUS 9 SRS";
char const userDescHuman[]  = "HUMAN";
char const userDescIndeterminate[]  = "REPLICANT";

const char* const userDesc[]  = {userDescReplicant, userDescIndeterminate, userDescHuman, userDescReplicant, userDescIndeterminate};

char const securityCodeK[]  = "25805-K-2973";
char const securityCodeDeckard[]  = "91077-B-26354";

const char* const userSecCode[]  = {securityCodeK, securityCodeDeckard};

char const access[]  = "ACCESS";

char const profileAuthMessage[]  =
"AUTHORIZATION GRANTED TO THE ABOVE USER TO DETAIN, IDENTIFY, AND/OR "
"RETIRE ANY INDIVIDUAL OR ENTITY SUSPECTED OF PRIOR VIOLATION OF THE "
"REPLICANT PROHIBITION ACT OF 2023 OR OTHERWISE IN BREACH OF ALLOWED "
"OPERATIONAL PARAMETERS.";

char const profileLicenseLine1[]  = "PROPERTY OF LOS ANGELES";
char const profileLicenseLine2[]  = "POLICE DEPT, SECTOR 5";

const char* const profileLicenseMessage[]  = {profileLicenseLine1, profileLicenseLine2};

char const noUserImageFound[]  = "NO USER IMAGE FOUND";

char const analysisWait[]  = "AWAITING SCAN DATA...";

char const redactedText[]  = "REDACTED";

char const notWanted[]  = "N/A";

char const wanted[]  = "WARRANT NO ";

char const match[]  = "MATCH";

char const partial[]  = "PARTIAL";

char const missing[]  = "NO DATA";

char const secCode[]  = "SEC CODE";

//  Garbage characters, used for intentionally garbled data.
char const garbage1  = 0xda;
char const garbage2  = 0xdb;
char const garbage3  = 0xdd;
char const garbage4  = 0xdc;
char const garbage5  = 0xb0;
char const garbage6  = 0xb1;
char const garbage7  = 0xa0;
char const garbage8  = 0xac;
char const garbage9  = 0xec;
char const garbage10  = ' ';

const char garbageTextArray []  = {
  garbage1, garbage2, garbage3, garbage4, garbage5, garbage6, garbage7, garbage8, garbage9, garbage10
};

//  Male first names, individually defined into  (Flash memory, instead of RAM)
const char firstNameM01 []  = "ADAM";
const char firstNameM02 []  = "ADI";
const char firstNameM03 []  = "AJAX";
const char firstNameM04 []  = "ANDREW";
const char firstNameM05 []  = "BIG";
const char firstNameM06 []  = "CLAUDE";
const char firstNameM07 []  = "DARYL";
const char firstNameM08 []  = "DAVID";
const char firstNameM09 []  = "EDWARD";
const char firstNameM10 []  = "GORDO";
const char firstNameM11 []  = "GRAHAM";
const char firstNameM12 []  = "HARRY";
const char firstNameM13 []  = "JACK";
const char firstNameM14 []  = "JOHN";
const char firstNameM15 []  = "LEONARD";
const char firstNameM16 []  = "MARCUS";
const char firstNameM17 []  = "NIANDER";
const char firstNameM18 []  = "RICK";
const char firstNameM19 []  = "ROBERT";
const char firstNameM20 []  = "ROY";
const char firstNameM21 []  = "SAPPER";
const char firstNameM22 []  = "SPENCER";
const char firstNameM23 []  = "STEPHEN";

//  An array to hold the above-declared Male first names, also in 
const char* const firstNameMale[23]  = {
firstNameM01, firstNameM02, firstNameM03, firstNameM04, firstNameM05, firstNameM06, firstNameM07, firstNameM08,
firstNameM09, firstNameM10, firstNameM11, firstNameM12, firstNameM13, firstNameM14, firstNameM15, firstNameM16,
firstNameM17, firstNameM18, firstNameM19, firstNameM20, firstNameM21, firstNameM22, firstNameM23
};

//  Female first names, individually defined into  (Flash memory, instead of RAM)
const char firstNameF01 []  = "ADA";
const char firstNameF02 []  = "ANNA";
const char firstNameF03 []  = "BETSY";
const char firstNameF04 []  = "DAISY";
const char firstNameF05 []  = "EISA";
const char firstNameF06 []  = "GIANA";
const char firstNameF07 []  = "GLORY";
const char firstNameF08 []  = "JADE";
const char firstNameF09 []  = "JANET";
const char firstNameF10 []  = "JEAN";
const char firstNameF11 []  = "LUCY";
const char firstNameF12 []  = "MARIA";
const char firstNameF13 []  = "MARYLIN";
const char firstNameF14 []  = "MOLLY";
const char firstNameF15 []  = "MOTOKO";
const char firstNameF16 []  = "NATALYA";
const char firstNameF17 []  = "PEARL";
const char firstNameF18 []  = "PRISCILLA";
const char firstNameF19 []  = "RACHAEL";
const char firstNameF20 []  = "SOPHIE";
const char firstNameF21 []  = "TAFFEY";
const char firstNameF22 []  = "TERA";
const char firstNameF23 []  = "VERA";

//  An array to hold the above-declared Female first names, also in 
const char* const firstNameFemale[23]  = {
    firstNameF01, firstNameF02, firstNameF03, firstNameF04, firstNameF05, firstNameF06, firstNameF07, firstNameF08,
    firstNameF09, firstNameF10, firstNameF11, firstNameF12, firstNameF13, firstNameF14, firstNameF15, firstNameF16,
    firstNameF17, firstNameF18, firstNameF19, firstNameF20, firstNameF21, firstNameF22, firstNameF23
    };

//  A pool of last names, individually defined into  (Flash memory, instead of RAM)
const char lastName01 []  = "AMDAHL";
const char lastName02 []  = "BARKER";
const char lastName03 []  = "BATTY";
const char lastName04 []  = "BAXTER";
const char lastName05 []  = "BEZIER";
const char lastName06 []  = "BRYANT";
const char lastName07 []  = "BOVOR";
const char lastName08 []  = "CHEW";
const char lastName09 []  = "COLEMAN";
const char lastName10 []  = "COOPER";
const char lastName11 []  = "DECKARD";
const char lastName12 []  = "EDISON";
const char lastName13 []  = "ERLANG";
const char lastName14 []  = "FARADAY";
const char lastName15 []  = "GATES";
const char lastName16 []  = "GRANVILLE";
const char lastName17 []  = "GRAVES";
const char lastName18 []  = "GUZZA";
const char lastName19 []  = "HOLDEN";
const char lastName20 []  = "HOPPER";
const char lastName21 []  = "KELVIN";
const char lastName22 []  = "KOLVIG";
const char lastName23 []  = "KOWALSKI";
const char lastName24 []  = "KUSANAGI";
const char lastName25 []  = "LAMARR";
const char lastName26 []  = "LEE";
const char lastName27 []  = "LOVELACE";
const char lastName28 []  = "MCLARGEHUGE"; //lol shut up
const char lastName29 []  = "MCNULTY";
const char lastName30 []  = "MONADI";
const char lastName31 []  = "MORTON";
const char lastName32 []  = "NETT";
const char lastName33 []  = "NETZEN";
const char lastName34 []  = "NEWTON";
const char lastName35 []  = "PERLMAN";
const char lastName36 []  = "PIM";
const char lastName37 []  = "RHODES";
const char lastName38 []  = "ROWE";
const char lastName39 []  = "RYDER";
const char lastName40 []  = "SAVAGE";
const char lastName41 []  = "SCHOTTKY";
const char lastName42 []  = "SEBASTIAN";
const char lastName43 []  = "STANFORD";
const char lastName44 []  = "STEELE";
const char lastName45 []  = "STRATTON";
const char lastName46 []  = "THERON";
const char lastName47 []  = "TURING";
const char lastName48 []  = "TURNER";
const char lastName49 []  = "TYRELL";
const char lastName50 []  = "WALLACE";
const char lastName51 []  = "WEAVER";
const char lastName52 []  = "WILLIAMS";

//  An array to hold the above-declared last names, also in 
const char* const lastName[52]  = {
    lastName01, lastName02, lastName03, lastName04, lastName05, lastName06, lastName07, lastName08,
    lastName09, lastName10, lastName11, lastName12, lastName13, lastName14, lastName15, lastName16,
    lastName17, lastName18, lastName19, lastName20, lastName21, lastName22, lastName23, lastName24,
    lastName25, lastName26, lastName27, lastName28, lastName30, lastName31, lastName32, lastName33,
    lastName34, lastName35, lastName36, lastName37, lastName38, lastName39, lastName40, lastName41,
    lastName42, lastName43, lastName44, lastName45, lastName46, lastName47, lastName48, lastName49,
    lastName50, lastName51, lastName52
};


//  Replicant job descriptions, individually defined into  (Flash memory, instead of RAM)
const char professionR01 []  = "MILITARY/ENGINEER";
const char professionR02 []  = "MILITARY/COMBAT";
const char professionR03 []  = "MILITARY/LEISURE";
const char professionR04 []  = "MILITARY/MEDICAL";
const char professionR05 []  = "MILITARY/INTEL";
const char professionR06 []  = "MILITARY/PILOT";
const char professionR07 []  = "HEAVY LOADER";
const char professionR08 []  = "PROTEIN FARMER";
const char professionR09 []  = "HAZ/CONTAINMENT";
const char professionR10 []  = "PROTEIN FARMER";
const char professionR11 []  = "EXEC/ASSISTANT";
const char professionR12 []  = "CIV/CHILDCARE";
const char professionR13 []  = "MERCENARY";
const char professionR14 []  = "MECH/FOUNDRY";
const char professionR15 []  = "SPINNER REPAIR";
const char professionR16 []  = "CRYPTOGRAPHER";
const char professionR17 []  = "EXPLOSIVES DISP.";
const char professionR18 []  = "BLADE RUNNER";
const char professionR19 []  = "SURVEILLANCE";
const char professionR20 []  = "CONSTRUCTION";
const char professionR21 []  = "OFFWORLD/COLONIST";

const char* const professionReplicant[21]  = {
    professionR01, professionR02, professionR03, professionR04, professionR05,
    professionR06, professionR07, professionR08, professionR09, professionR10,
    professionR11, professionR12, professionR13, professionR14, professionR15,
    professionR16, professionR17, professionR18, professionR19, professionR20,
    professionR21
};

const char professionH01 []  = "ENGINEER";
const char professionH02 []  = "BLADE RUNNER";
const char professionH03 []  = "GENETICIST";
const char professionH04 []  = "POLITICIAN";
const char professionH05 []  = "LAW ENFORCEMENT";
const char professionH06 []  = "SCIENTIST";
const char professionH07 []  = "DOCTOR";
const char professionH08 []  = "TRADER";
const char professionH09 []  = "SCRAP DEALER";
const char professionH10 []  = "PRIVATE SECURITY";
const char professionH11 []  = "CORP/CLERK";
const char professionH12 []  = "ENTERTAINER";
const char professionH13 []  = "ENGINEER";
const char professionH14 []  = "ARCHIVIST";
const char professionH15 []  = "GUN RUNNER";
const char professionH16 []  = "NOODLE CHEF";
const char professionH17 []  = "VID-PHONE OP.";
const char professionH18 []  = "BOTANIST";
const char professionH19 []  = "CIV/PILOT";
const char professionH20 []  = "ANIMOID DESIGNER";
const char professionH21 []  = "PROGRAMMER";

const char* const professionHuman[21]  = {
    professionH01, professionH02, professionH03, professionH04, professionH05,
    professionH06, professionH07, professionH08, professionH09, professionH10,
    professionH11, professionH12, professionH13, professionH14, professionH15,
    professionH16, professionH17, professionH18, professionH19, professionH20,
    professionH21
};

const char crime01 []  = "HOMICIDE";
const char crime02 []  = "ARSON";
const char crime03 []  = "BATTERY";
const char crime04 []  = "KIDNAPPING";
const char crime05 []  = "MANSLAUGHTER";
const char crime06 []  = "THEFT (DATA)";
const char crime07 []  = "BURGLARY";
const char crime08 []  = "DRUG MANUF";
const char crime09 []  = "THEFT (IDENT)";
const char crime10 []  = "PIRACY (DATA)";
const char crime11 []  = "TERRORISM";
const char crime12 []  = "FRAUD (CREDIT)";
const char crime13 []  = "COUNTERFEITING";
const char crime14 []  = "VANDALISM";
const char crime15 []  = "SOLICITATION";

const char* const crimeList[15]  = {
    crime01, crime02, crime03, crime04, crime05,
    crime06, crime07, crime08, crime09, crime10,
    crime11, crime12, crime13, crime14, crime15
};

#endif
