#pragma once

enum credentialsStatus {
	WRONG_PASSWORD,
	RIGHT_PASSWORD,
	ERROR_,
	USER_ALREADY_EXISTS,
	USER_REGISTERED,
	RIGHT_TOKEN,
	WRONG_TOKEN
};

enum requestType {
	REGISTRATION,
	LOGIN
};