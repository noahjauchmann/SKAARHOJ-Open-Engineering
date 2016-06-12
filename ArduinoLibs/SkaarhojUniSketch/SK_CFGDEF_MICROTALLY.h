#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 6	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 570 260\" width=\"50%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"570\" height=\"260\" x=0 y=0 ry=50 rx=50 style=\"fill:rgb(0,0,0);\" /><rect width=\"540\" height=\"230\" x=15 y=15 ry=30 rx=30 style=\"fill:url(#grad1);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16108, GZIP size: 5301 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6B, 0x73, 0x9B, 0xC8, 0xB2, 0xDF, 0xCF, 0xAF, 
	0x60, 0x49, 0xAD, 0x2D, 0xAE, 0x90, 0x0C, 0x48, 0x48, 0x32, 
	0x18, 0xFB, 0xDA, 0xCE, 0xC3, 0xAE, 0x8D, 0x13, 0x57, 0x94, 
	0x4D, 0xF6, 0x5E, 0x95, 0x2A, 0x85, 0x61, 0x64, 0x91, 0x60, 
	0xD0, 0x1D, 0x90, 0x1F, 0xC7, 0xF1, 0x7F, 0x3F, 0xDD, 0x33, 
	0x03, 0x1A, 0x10, 0x72, 0x94, 0xEC, 0xDE, 0xA4, 0xA2, 0x61, 
	0x5E, 0xFD, 0xEE, 0x9E, 0x9E, 0x86, 0xDC, 0xFA, 0x54, 0x39, 
	0xFB, 0x1C, 0x78, 0x93, 0xC9, 0x48, 0x37, 0x07, 0x56, 0xD7, 
	0xD6, 0x47, 0x86, 0xAE, 0x5E, 0xBE, 0xB9, 0x50, 0x4C, 0x55, 
	0xEF, 0x1B, 0x53, 0x1D, 0xC6, 0xFB, 0xC6, 0xB0, 0x18, 0xFF, 
	0xF0, 0x49, 0x1A, 0xE7, 0xEB, 0xCD, 0x9E, 0xD8, 0x60, 0xD5, 
	0x36, 0xF0, 0x09, 0xD8, 0x61, 0xD5, 0x77, 0x14, 0x28, 0x7A, 
	0xF5, 0x1D, 0x05, 0x0E, 0x3E, 0x31, 0x75, 0xFF, 0x75, 0x0B, 
	0xE4, 0x85, 0xE4, 0xF6, 0x6D, 0x96, 0x03, 0x85, 0xA6, 0xAE, 
	0x1E, 0x7F, 0x7C, 0x75, 0xA1, 0xEA, 0x26, 0xEC, 0x31, 0x6D, 
	0x5D, 0x1D, 0x3F, 0x64, 0x39, 0xB9, 0x51, 0xA5, 0x85, 0xAF, 
	0x97, 0x09, 0xF2, 0x32, 0x31, 0x61, 0xED, 0x25, 0x4D, 0xAF, 
	0xA9, 0x7F, 0xA3, 0x8C, 0x69, 0xA0, 0xEA, 0x1D, 0x53, 0xEF, 
	0x58, 0xFA, 0x44, 0x55, 0x75, 0xF5, 0x2C, 0x8D, 0x43, 0xE5, 
	0x65, 0x7A, 0x97, 0xC0, 0xF3, 0xC7, 0xF4, 0xFA, 0x3A, 0x26, 
	0xF0, 0x70, 0xFA, 0x10, 0x40, 0x3B, 0x45, 0xC0, 0x6C, 0x2B, 
	0xB9, 0x8D, 0xC8, 0xDD, 0xDA, 0xD6, 0xFA, 0xAA, 0xDB, 0xBD, 
	0x4B, 0x7A, 0xFD, 0x83, 0x55, 0xC7, 0x7F, 0xFE, 0xA5, 0xBC, 
	0x5F, 0xE6, 0x8B, 0x65, 0x2E, 0x16, 0xF6, 0x9E, 0xA7, 0x84, 
	0x0D, 0xBE, 0xA1, 0xE9, 0x72, 0xA1, 0x1C, 0x57, 0xBB, 0x27, 
	0x6B, 0xB0, 0xFF, 0x5C, 0x64, 0x39, 0x25, 0xC0, 0xE3, 0x1F, 
	0xE4, 0x81, 0x50, 0x4E, 0x44, 0x5F, 0xEF, 0xD8, 0x8D, 0xD3, 
	0xCA, 0xEB, 0x28, 0x8E, 0xCB, 0x35, 0x56, 0xF3, 0x1A, 0xF8, 
	0x5D, 0x5B, 0x82, 0x14, 0xD6, 0xF0, 0x0C, 0x56, 0x48, 0xEA, 
	0xB3, 0x05, 0x9A, 0xC1, 0x66, 0x00, 0x02, 0x8B, 0xB4, 0xE2, 
	0xE2, 0x52, 0x19, 0xE7, 0x7C, 0xDF, 0x10, 0x46, 0xF4, 0x1E, 
	0x4E, 0x6C, 0xA3, 0x2C, 0x6B, 0xA4, 0xAB, 0xAD, 0x62, 0xB7, 
	0xC2, 0x26, 0xB4, 0x15, 0x10, 0x30, 0x91, 0xDC, 0xA7, 0xB9, 
	0x3A, 0x2D, 0xBA, 0xAF, 0x92, 0x10, 0x3B, 0x86, 0x6E, 0x5A, 
	0x60, 0x6A, 0xC7, 0xCB, 0x3C, 0x55, 0xCE, 0x93, 0x9C, 0xD0, 
	0x5B, 0x3F, 0x56, 0x05, 0xC6, 0x0F, 0x7E, 0x12, 0xA6, 0x37, 
	0xAC, 0x57, 0x22, 0x7C, 0x8F, 0xE8, 0xDF, 0xCF, 0x66, 0x15, 
	0x82, 0x2A, 0xF8, 0x4F, 0xE3, 0x68, 0xC1, 0x11, 0x5B, 0x95, 
	0xE1, 0x34, 0xC9, 0x69, 0x1A, 0xF3, 0x99, 0xCE, 0x48, 0x70, 
	0x7B, 0xBA, 0xCC, 0x51, 0xC8, 0x85, 0x81, 0x00, 0x15, 0x52, 
	0xF7, 0xF5, 0xC7, 0x13, 0xA9, 0xF7, 0x91, 0xFA, 0x49, 0x16, 
	0xE5, 0x51, 0x9A, 0x00, 0x8B, 0x0F, 0x48, 0x0C, 0x2A, 0x67, 
	0x9F, 0xE1, 0xA8, 0xCC, 0x5E, 0xA6, 0x99, 0xB4, 0xED, 0x32, 
	0xF6, 0x1F, 0x94, 0x0B, 0x3F, 0xA0, 0x00, 0x19, 0x58, 0x37, 
	0xD1, 0xCB, 0xD8, 0xA0, 0x8A, 0x22, 0x49, 0x17, 0x6B, 0x06, 
	0x27, 0x44, 0x2C, 0x24, 0xCB, 0x25, 0xF1, 0x36, 0x85, 0x85, 
	0x2B, 0x2E, 0x3F, 0x90, 0x20, 0xA5, 0x21, 0x87, 0xAA, 0x31, 
	0xB0, 0x96, 0xB1, 0x9A, 0x1D, 0xA7, 0x4B, 0x1A, 0x90, 0x52, 
	0x03, 0x13, 0xF5, 0x62, 0xEF, 0x15, 0xC6, 0x0A, 0xD6, 0x42, 
	0x04, 0x60, 0x7E, 0x60, 0x8A, 0xB6, 0xE8, 0xF7, 0x44, 0xDB, 
	0x17, 0xAD, 0x2D, 0xDA, 0x01, 0x92, 0xD0, 0x91, 0xD5, 0xD7, 
	0xF9, 0x69, 0xE5, 0x41, 0xEF, 0x93, 0x4F, 0x1F, 0x94, 0x3C, 
	0xBA, 0x89, 0x92, 0x6B, 0xC5, 0x32, 0x7E, 0xAF, 0x8D, 0xD8, 
	0x30, 0xB2, 0xA5, 0x96, 0x99, 0x96, 0xC2, 0x88, 0xA9, 0xC9, 
	0x80, 0x7F, 0xE6, 0x56, 0xC6, 0x39, 0x14, 0xBB, 0x94, 0x4F, 
	0x69, 0xBC, 0xBC, 0x61, 0xAA, 0x33, 0xE4, 0xE1, 0x13, 0x3F, 
	0xF6, 0x93, 0xA0, 0x1C, 0xB7, 0xFA, 0xC5, 0xC4, 0x5B, 0x72, 
	0x4B, 0xE2, 0x4C, 0x5A, 0x2F, 0xE9, 0xF9, 0x83, 0x9F, 0x73, 
	0x23, 0x98, 0x08, 0x4C, 0x20, 0xE1, 0xE8, 0x1E, 0x7E, 0x5F, 
	0x46, 0xA8, 0xD5, 0xCF, 0xD1, 0x02, 0x87, 0x5E, 0x7E, 0x7A, 
	0xA5, 0x72, 0x53, 0x62, 0xA6, 0x6F, 0xD9, 0x10, 0x2D, 0x5F, 
	0x43, 0x30, 0x24, 0x99, 0xA4, 0x50, 0x8D, 0xC3, 0xD9, 0x34, 
	0x5D, 0x8B, 0x0C, 0x97, 0x3E, 0x2C, 0xC0, 0x2D, 0x10, 0x19, 
	0xCC, 0x95, 0x91, 0xAF, 0xF9, 0x76, 0xB9, 0x6E, 0x20, 0xD6, 
	0xF5, 0x00, 0x76, 0x1A, 0x2C, 0x19, 0x3F, 0x3D, 0xCE, 0xCF, 
	0x39, 0x8D, 0xCA, 0x2E, 0x4C, 0x8F, 0x49, 0x92, 0xA5, 0x54, 
	0x79, 0xE3, 0x47, 0x09, 0x1B, 0x95, 0x78, 0x33, 0xC2, 0x2B, 
	0xF8, 0x1D, 0xB0, 0x5F, 0xD3, 0xE2, 0xCD, 0x08, 0x9A, 0xA9, 
	0xD8, 0x39, 0x5F, 0xE6, 0x39, 0x8F, 0x7C, 0xF2, 0x2E, 0x73, 
	0xCF, 0x36, 0x58, 0x33, 0xE0, 0xCD, 0xD0, 0x66, 0xCD, 0x3E, 
	0xEF, 0x99, 0x86, 0x68, 0x2D, 0xD1, 0x8A, 0xC5, 0x70, 0xFC, 
	0xB0, 0xD6, 0x12, 0xFD, 0x9E, 0xD8, 0x6D, 0x8B, 0xF5, 0x43, 
	0xCB, 0x2E, 0xF6, 0x8B, 0x0D, 0x7D, 0xB1, 0xD2, 0xC2, 0x11, 
	0x41, 0xD2, 0xE7, 0x79, 0x94, 0x13, 0x59, 0xB7, 0x32, 0x61, 
	0x00, 0xDA, 0xF8, 0x03, 0xDB, 0x11, 0x6F, 0x7B, 0x86, 0x68, 
	0x2D, 0xD1, 0xF6, 0x45, 0x3B, 0xE0, 0x6D, 0x5F, 0xCC, 0xF7, 
	0xC5, 0xBE, 0xBE, 0xD8, 0x67, 0x8B, 0x71, 0x5B, 0xEC, 0xB3, 
	0xC5, 0x3E, 0x5B, 0xEC, 0x1B, 0x88, 0xF9, 0x81, 0xD8, 0x37, 
	0x14, 0xFD, 0xA1, 0xE8, 0x8F, 0x58, 0x5F, 0x18, 0xE9, 0xDB, 
	0x68, 0xC6, 0xE2, 0x51, 0x7F, 0xA5, 0xA0, 0x37, 0xFE, 0xCD, 
	0x8D, 0xBF, 0x36, 0xC6, 0xD5, 0x23, 0x0D, 0x9D, 0x2D, 0x89, 
	0xA4, 0x55, 0x16, 0xEC, 0xFC, 0x2C, 0x97, 0x86, 0xC6, 0x7E, 
	0xBE, 0xA4, 0x3E, 0x1A, 0x6E, 0x21, 0x89, 0x77, 0x29, 0xBD, 
	0x01, 0x7F, 0x05, 0x13, 0x25, 0x19, 0x9F, 0x24, 0xA1, 0x64, 
	0x74, 0x27, 0x3E, 0xCD, 0x58, 0xF8, 0xF8, 0xB1, 0x57, 0xEE, 
	0x83, 0x3B, 0x47, 0x21, 0x49, 0x95, 0x8F, 0x7E, 0x1C, 0xE3, 
	0x79, 0x82, 0xA7, 0xAA, 0x38, 0xF4, 0xD5, 0xF2, 0x0C, 0x57, 
	0x79, 0x22, 0xB0, 0x87, 0xDD, 0x62, 0x1B, 0xF7, 0xB2, 0x62, 
	0x1B, 0x73, 0x32, 0x8E, 0xFD, 0x74, 0x4E, 0xD3, 0x1B, 0x1F, 
	0x0D, 0x59, 0x19, 0x93, 0x3C, 0x87, 0x28, 0xC1, 0x89, 0xC1, 
	0xC8, 0x42, 0x02, 0x1F, 0xCF, 0x27, 0x60, 0xE9, 0x16, 0x23, 
	0x24, 0xB8, 0x01, 0x78, 0xCE, 0x40, 0x57, 0x4F, 0xFC, 0xE4, 
	0x9B, 0xC4, 0xC0, 0xE9, 0xE9, 0x9F, 0x3F, 0xDE, 0x8B, 0x92, 
	0x68, 0xDA, 0x7C, 0x79, 0x7E, 0xC9, 0x9C, 0xD2, 0xE6, 0xA6, 
	0xC4, 0xBC, 0x98, 0x1F, 0xC6, 0xC0, 0x59, 0xCA, 0x23, 0x00, 
	0x82, 0x01, 0x70, 0x00, 0xBF, 0x08, 0x73, 0x60, 0x8F, 0xBF, 
	0x77, 0xC0, 0x10, 0x7E, 0x57, 0xFE, 0x37, 0xC5, 0xE0, 0x87, 
	0xF0, 0x98, 0x3E, 0xD0, 0xE8, 0xE0, 0xD8, 0x60, 0x11, 0x03, 
	0xC2, 0x26, 0x70, 0x7E, 0xE1, 0xDF, 0x8B, 0x81, 0x22, 0xAE, 
	0x01, 0xAD, 0xD5, 0x25, 0x62, 0x7A, 0x63, 0x84, 0x13, 0x66, 
	0x2E, 0x80, 0xCF, 0xC1, 0x76, 0x78, 0xBC, 0x52, 0x79, 0x64, 
	0xE6, 0x38, 0x62, 0x36, 0x52, 0xC1, 0xD1, 0xB0, 0x92, 0xF7, 
	0x9E, 0x47, 0x55, 0xEC, 0xBF, 0x20, 0x37, 0x29, 0x7D, 0x40, 
	0x81, 0x62, 0x56, 0xC4, 0x52, 0x21, 0x34, 0x22, 0xD8, 0x8D, 
	0xD1, 0x6B, 0x23, 0x04, 0x3E, 0x73, 0x49, 0x68, 0x16, 0x81, 
	0x61, 0x0A, 0x83, 0xE7, 0xB4, 0x6F, 0x86, 0x08, 0xE4, 0x89, 
	0x90, 0xC8, 0xCF, 0x12, 0xD1, 0xFD, 0x98, 0x6E, 0x39, 0x77, 
	0xCC, 0x0F, 0xAA, 0x3A, 0x66, 0x76, 0xBA, 0xC7, 0xFE, 0x35, 
	0xE3, 0x7F, 0xD0, 0x13, 0x9D, 0x2D, 0x8E, 0x20, 0xA1, 0xE6, 
	0x9B, 0x8C, 0x29, 0x5B, 0x34, 0xBC, 0xB5, 0x45, 0x6B, 0xE2, 
	0x8F, 0x95, 0x71, 0x22, 0x18, 0x6C, 0x42, 0xC2, 0x2B, 0x3F, 
	0xF8, 0xA6, 0x70, 0x24, 0x6C, 0x5C, 0xFD, 0xEC, 0x47, 0xB9, 
	0x82, 0x01, 0x2C, 0x53, 0x32, 0x38, 0xCD, 0x81, 0x4C, 0x3C, 
	0xC3, 0xD9, 0xD4, 0xE9, 0x32, 0xCB, 0xD3, 0x1B, 0xE5, 0x0C, 
	0x0E, 0xD0, 0x18, 0x02, 0x2A, 0x1F, 0x7C, 0x97, 0x2A, 0xC7, 
	0x01, 0x33, 0x3A, 0xDE, 0xE7, 0x09, 0x37, 0x9C, 0xBA, 0x33, 
	0xC6, 0x2E, 0x32, 0x74, 0x9E, 0xF8, 0xB0, 0xE2, 0x96, 0x1B, 
	0xD0, 0x96, 0x67, 0x29, 0x66, 0x20, 0x0A, 0xA0, 0x4F, 0x48, 
	0xC0, 0x0E, 0xF7, 0x21, 0x9A, 0xBE, 0x9F, 0x90, 0x58, 0x39, 
	0xA1, 0xD1, 0xF5, 0x3C, 0x4F, 0x48, 0x86, 0xBE, 0x63, 0x0A, 
	0xD2, 0x2E, 0x22, 0x4A, 0x53, 0xBC, 0xA6, 0x9C, 0xBE, 0xC0, 
	0x41, 0x43, 0x40, 0x69, 0xBD, 0x85, 0x73, 0x3C, 0xCF, 0xD8, 
	0xB8, 0x56, 0x99, 0x78, 0x1D, 0x25, 0x04, 0x0E, 0xCA, 0xE4, 
	0x9A, 0xC8, 0x93, 0xC5, 0x35, 0x01, 0xD2, 0x05, 0xB8, 0x4F, 
	0x64, 0x70, 0x4D, 0xA8, 0xE5, 0x28, 0x28, 0xE7, 0x93, 0x18, 
	0x64, 0x06, 0xEB, 0x75, 0x4B, 0xEF, 0xE9, 0x7D, 0xDD, 0x06, 
	0x27, 0x1D, 0xEA, 0x23, 0xF0, 0x0B, 0x38, 0xF7, 0x01, 0x36, 
	0x58, 0x2D, 0xF8, 0x2E, 0x84, 0x40, 0xB8, 0x7E, 0x98, 0x03, 
	0xDD, 0x1C, 0xC2, 0x9D, 0x45, 0x37, 0xF7, 0x75, 0x4C, 0x48, 
	0x30, 0x74, 0xA1, 0x11, 0xA5, 0x71, 0x4A, 0xCD, 0xE2, 0x01, 
	0x33, 0x9D, 0x8B, 0x4B, 0x86, 0xE3, 0x12, 0x9F, 0xC7, 0xCB, 
	0x05, 0x9C, 0x91, 0x3C, 0x59, 0xC2, 0x35, 0x31, 0xF1, 0x13, 
	0x46, 0x02, 0x7F, 0xFA, 0xF9, 0x44, 0x09, 0x00, 0xBF, 0x32, 
	0x15, 0xB8, 0x86, 0x94, 0x4F, 0xB7, 0xEC, 0xC9, 0x2A, 0xC7, 
	0xAC, 0x62, 0xEC, 0x13, 0x68, 0x5E, 0xB4, 0x96, 0x68, 0x7B, 
	0xA2, 0xED, 0x8B, 0xD6, 0x16, 0xED, 0x40, 0xB4, 0x43, 0xD1, 
	0x8E, 0x58, 0x6B, 0x89, 0xFD, 0x96, 0xD8, 0x6F, 0x89, 0xFD, 
	0x96, 0xD8, 0x6F, 0x89, 0xFD, 0x96, 0xD8, 0x6F, 0x89, 0xFD, 
	0x16, 0xDF, 0x0F, 0x96, 0x73, 0x2C, 0xDA, 0x13, 0xD1, 0x9E, 
	0x8A, 0x96, 0x79, 0xDD, 0xCF, 0xA7, 0x88, 0x2A, 0x4F, 0x39, 
	0x70, 0x0F, 0x7F, 0xB2, 0xCA, 0xA7, 0x5E, 0xF9, 0xD4, 0xDF, 
	0xC2, 0xC5, 0x44, 0x16, 0x8E, 0x0B, 0x5F, 0x8E, 0xFF, 0x60, 
	0x00, 0xB1, 0xE5, 0x36, 0x01, 0x79, 0x3C, 0x57, 0xA0, 0xE8, 
	0xB3, 0x3C, 0x7A, 0xFA, 0x7C, 0x02, 0x36, 0xC6, 0x03, 0x00, 
	0x13, 0x13, 0x16, 0xC4, 0x79, 0x12, 0xF6, 0xD3, 0x16, 0xF5, 
	0xD7, 0xDB, 0x0F, 0x48, 0xD9, 0xAB, 0x31, 0x9E, 0x21, 0xA7, 
	0xC7, 0x35, 0x53, 0xBA, 0x80, 0xA3, 0x96, 0x61, 0xB8, 0x48, 
	0x93, 0x28, 0x4F, 0xE9, 0x56, 0x22, 0x66, 0xDC, 0x1F, 0xBF, 
	0xFE, 0x84, 0x24, 0x82, 0x7D, 0x0A, 0xD1, 0x20, 0xE1, 0x27, 
	0x69, 0x0E, 0x01, 0x40, 0xC5, 0xA8, 0x8C, 0xE9, 0x80, 0xFA, 
	0x01, 0x3D, 0x11, 0xDA, 0xBF, 0xE0, 0xDF, 0xFF, 0x30, 0xC6, 
	0xC2, 0x7C, 0x8E, 0x42, 0x23, 0x62, 0x02, 0xB6, 0xED, 0x55, 
	0x36, 0xED, 0x95, 0x5B, 0xF6, 0xCA, 0x0D, 0x7B, 0x62, 0x39, 
	0x13, 0x17, 0xE4, 0x88, 0xCC, 0xD4, 0xA1, 0xB5, 0x44, 0xDB, 
	0x13, 0x6D, 0x5F, 0xB4, 0xB6, 0x68, 0x07, 0xA2, 0x1D, 0x8A, 
	0x76, 0x24, 0xDA, 0x7D, 0xD1, 0x9A, 0xC6, 0x56, 0xEC, 0x22, 
	0x1D, 0x28, 0xC3, 0x37, 0x2C, 0xC2, 0xCB, 0x3A, 0x7B, 0x9B, 
	0xDE, 0x81, 0x6D, 0x14, 0x14, 0xF3, 0x13, 0x21, 0x8B, 0xFE, 
	0xCD, 0x32, 0x60, 0xF7, 0x5F, 0xB3, 0x65, 0xC2, 0xE2, 0x9E, 
	0x72, 0xFD, 0xEA, 0xE4, 0xBC, 0x45, 0xB4, 0x47, 0x4A, 0x20, 
	0x57, 0x49, 0x94, 0x10, 0x12, 0xD9, 0x1B, 0x92, 0xE4, 0xDD, 
	0x6B, 0x92, 0xBF, 0x8A, 0x09, 0x3E, 0x9E, 0x3C, 0x9C, 0x87, 
	0xB0, 0xE2, 0xA9, 0xDC, 0x92, 0x91, 0xFC, 0xB8, 0x45, 0xF4, 
	0x5C, 0x7B, 0x9C, 0xA5, 0xB4, 0x85, 0x11, 0x27, 0x51, 0xA2, 
	0x44, 0xC9, 0x35, 0xD2, 0xC5, 0xA9, 0x3C, 0xA7, 0xD1, 0xD5, 
	0x32, 0x27, 0xAD, 0x44, 0xCF, 0x27, 0xC9, 0x54, 0x73, 0x05, 
	0x68, 0x52, 0x81, 0xF0, 0x96, 0x43, 0x10, 0x73, 0x02, 0xE4, 
	0x63, 0x9A, 0x04, 0x71, 0x14, 0x7C, 0x73, 0x76, 0x19, 0x59, 
	0xEA, 0x2C, 0xD9, 0x6D, 0xE7, 0xED, 0x5D, 0x55, 0xEB, 0x66, 
	0x70, 0x27, 0x8B, 0x63, 0xB8, 0x0D, 0xA5, 0x9F, 0x20, 0xE7, 
	0x69, 0x69, 0xEE, 0xAE, 0x1E, 0x2C, 0x29, 0x24, 0xD5, 0x8E, 
	0xBA, 0x48, 0x23, 0xBC, 0x24, 0xA9, 0x4F, 0x12, 0x89, 0x0B, 
	0x48, 0xE5, 0xF2, 0x0B, 0x89, 0xAF, 0x02, 0xC1, 0x0C, 0x6E, 
	0xD1, 0x8E, 0xFA, 0x22, 0x64, 0x7F, 0x54, 0x1D, 0x12, 0xFB, 
	0xF4, 0x1B, 0x81, 0x01, 0x9E, 0xF1, 0xF2, 0x6E, 0xE7, 0x8E, 
	0x59, 0x82, 0xA3, 0x5A, 0xEB, 0x30, 0xC7, 0x9B, 0x61, 0x06, 
	0xEC, 0x8F, 0x04, 0x73, 0x30, 0x18, 0xAC, 0xC3, 0x34, 0x2B, 
	0x30, 0x03, 0xFA, 0x6A, 0x5D, 0x0E, 0xA5, 0x0E, 0x02, 0xB8, 
	0x75, 0xE4, 0x44, 0xA8, 0x01, 0x10, 0xC3, 0x42, 0x79, 0xEB, 
	0x78, 0xEB, 0xBD, 0xEF, 0xC6, 0x2D, 0x75, 0x9E, 0xE7, 0x0B, 
	0x67, 0x6F, 0xEF, 0xEE, 0xEE, 0xAE, 0x7B, 0xD7, 0xEB, 0xA6, 
	0xF4, 0x9A, 0x25, 0xF5, 0x7B, 0xD9, 0x2D, 0x04, 0xD1, 0x1A, 
	0x68, 0x1F, 0x21, 0x6B, 0x8F, 0xFE, 0x69, 0x8B, 0xAB, 0x21, 
	0xC8, 0x69, 0x1C, 0xDD, 0x5C, 0xAB, 0x9A, 0x2E, 0x9B, 0x01, 
	0x4C, 0x33, 0xF4, 0xA4, 0xEB, 0x2F, 0x16, 0x24, 0x09, 0x4F, 
	0xE7, 0x51, 0x1C, 0xB6, 0x64, 0x38, 0x59, 0xFE, 0xCE, 0xBF, 
	0x79, 0x1D, 0x87, 0xD9, 0xCA, 0x5A, 0x48, 0x37, 0x82, 0x53, 
	0x91, 0x9E, 0x7D, 0xBC, 0x78, 0xEB, 0xC1, 0x99, 0xFF, 0xD5, 
	0x33, 0xDC, 0xAF, 0x07, 0x26, 0xFC, 0xB4, 0xDB, 0x5A, 0x7E, 
	0xF8, 0x75, 0x67, 0xA7, 0xC5, 0xC0, 0xA2, 0x5C, 0xD4, 0x28, 
	0x59, 0x60, 0x1D, 0xE1, 0x31, 0x0A, 0x1D, 0x95, 0x81, 0xFA, 
	0xA2, 0xB6, 0xBF, 0xEA, 0x09, 0xDC, 0xE2, 0xE4, 0x7E, 0x86, 
	0x55, 0x03, 0x47, 0x65, 0xF2, 0x75, 0x80, 0xA5, 0xC5, 0xBD, 
	0xAB, 0xEA, 0x70, 0x04, 0x2E, 0x89, 0x93, 0x61, 0xA6, 0x97, 
	0x4D, 0xBE, 0x4E, 0x8F, 0xCA, 0x27, 0x47, 0x05, 0xF9, 0x03, 
	0x1F, 0x2B, 0x32, 0xDA, 0x9E, 0x7A, 0x70, 0x45, 0xF7, 0x0E, 
	0x55, 0x89, 0x70, 0xFA, 0xF6, 0x2A, 0x96, 0x14, 0x4D, 0xBA, 
	0x94, 0x2C, 0xE0, 0xDC, 0x24, 0x2D, 0xF5, 0x3B, 0x68, 0x14, 
	0x96, 0x57, 0x56, 0xDF, 0xD1, 0xF1, 0x09, 0xE7, 0x30, 0xF0, 
	0xB8, 0xC0, 0xB2, 0x93, 0xB9, 0xDA, 0x26, 0x6D, 0x15, 0x08, 
	0xCC, 0x35, 0x3D, 0xA8, 0xF2, 0x1C, 0x74, 0x19, 0xC9, 0x5D, 
	0x46, 0xB1, 0x77, 0xE1, 0xE7, 0xF3, 0xEE, 0x2C, 0x4E, 0x41, 
	0x36, 0x26, 0xAA, 0x83, 0x11, 0xDA, 0x8D, 0x49, 0x72, 0x9D, 
	0xCF, 0x3B, 0xA6, 0xD6, 0x56, 0x7F, 0x57, 0x5D, 0xE6, 0x62, 
	0x1E, 0x93, 0xC9, 0xBC, 0xAF, 0x6A, 0x6E, 0x65, 0xD1, 0xA1, 
	0x09, 0x42, 0x4B, 0x24, 0x14, 0xD5, 0x59, 0xA3, 0xE0, 0x3D, 
	0x9F, 0xAE, 0x9E, 0x1C, 0xC3, 0xF3, 0xF2, 0xA3, 0xE2, 0xAA, 
	0xE2, 0xF0, 0x94, 0x58, 0x01, 0x62, 0x41, 0x3C, 0x9A, 0x0E, 
	0x1A, 0x08, 0xF4, 0x84, 0xB5, 0x49, 0x55, 0x13, 0x85, 0x7B, 
	0xAA, 0x61, 0x0C, 0x2C, 0x33, 0x16, 0x75, 0xD8, 0xD5, 0x06, 
	0x9A, 0x54, 0x3D, 0x7F, 0x58, 0x80, 0x1E, 0xC0, 0xF3, 0x73, 
	0xCC, 0xE1, 0xB9, 0x06, 0xD4, 0x0E, 0x8C, 0x47, 0x39, 0x2A, 
	0xE8, 0x25, 0x89, 0x09, 0xE6, 0x50, 0x6A, 0x10, 0xFB, 0x59, 
	0x06, 0x48, 0x49, 0x98, 0x33, 0x5D, 0x3C, 0x83, 0x26, 0x58, 
	0x3C, 0x6C, 0x89, 0xE7, 0xF4, 0xB2, 0x44, 0x74, 0x9A, 0x2E, 
	0x1E, 0x7E, 0x0E, 0x4D, 0x94, 0x64, 0x5B, 0xA2, 0x39, 0x7F, 
	0x37, 0x2E, 0xF1, 0x9C, 0x27, 0x19, 0xA1, 0xB9, 0x84, 0x09, 
	0xC0, 0x28, 0x02, 0x9B, 0x5B, 0x44, 0x46, 0xEA, 0x19, 0x7A, 
	0x04, 0x46, 0x1E, 0x1D, 0x8C, 0xFF, 0xF8, 0x72, 0x71, 0xFC, 
	0xD7, 0xF1, 0xE9, 0xC7, 0xF3, 0xF7, 0xEF, 0xC6, 0x6E, 0x04, 
	0xF6, 0x1E, 0xCD, 0x5A, 0x4C, 0xD4, 0x8C, 0xA8, 0x6C, 0xE1, 
	0x27, 0xC2, 0xD6, 0x67, 0x49, 0xC0, 0x68, 0xE9, 0x30, 0x5A, 
	0xE0, 0x37, 0x12, 0xF4, 0xAF, 0x2F, 0xC5, 0xCA, 0xD0, 0xFA, 
	0x52, 0xD0, 0x6E, 0xB4, 0xB3, 0x83, 0x3A, 0xFE, 0xFE, 0xFD, 
	0xEC, 0xF3, 0xED, 0x84, 0x4C, 0x77, 0x76, 0x78, 0x0B, 0xBA, 
	0x97, 0x1E, 0x27, 0x11, 0xF4, 0x8C, 0xDF, 0xBC, 0x96, 0x69, 
	0x57, 0x06, 0x27, 0xC6, 0x54, 0xD3, 0x42, 0xFA, 0x3A, 0x19, 
	0xA3, 0x59, 0xEB, 0x91, 0xE6, 0x92, 0x38, 0x23, 0x0A, 0xD0, 
	0xFB, 0x1B, 0x05, 0xA7, 0xF0, 0x4C, 0x66, 0x91, 0xBE, 0x57, 
	0x04, 0xE9, 0x3A, 0xB9, 0x9A, 0x0B, 0xC4, 0xFA, 0x9B, 0x4C, 
	0x87, 0xC1, 0x95, 0x84, 0x0D, 0xBF, 0xD1, 0x33, 0x22, 0x6F, 
	0xA3, 0x3C, 0x9F, 0xA4, 0xB8, 0xC7, 0x6C, 0xA2, 0x7A, 0xFC, 
	0x78, 0x65, 0xD8, 0xFB, 0xBF, 0x25, 0xA1, 0x0F, 0x63, 0x30, 
	0xB5, 0x00, 0x12, 0x86, 0xE3, 0x38, 0x6E, 0xA9, 0xE0, 0x19, 
	0x19, 0x18, 0x35, 0x28, 0xC2, 0xA5, 0x07, 0x89, 0x70, 0x0B, 
	0x97, 0x82, 0xFC, 0x93, 0x09, 0x9D, 0x0A, 0x5F, 0xBC, 0x8D, 
	0xB2, 0xE8, 0x2A, 0x8A, 0xA3, 0xFC, 0xC1, 0x53, 0xD9, 0x33, 
	0x1C, 0xA1, 0x6E, 0x94, 0xD1, 0xC0, 0x23, 0xFA, 0x57, 0x6C, 
	0xF2, 0x15, 0x01, 0xDC, 0x5A, 0x18, 0x01, 0x5C, 0x68, 0xDF, 
	0xBF, 0xB7, 0xF8, 0x83, 0x37, 0x99, 0x6A, 0x7A, 0x29, 0x48, 
	0x0F, 0x9F, 0x10, 0x86, 0x10, 0x39, 0x7B, 0x9C, 0x20, 0xB4, 
	0xE9, 0x51, 0xAD, 0xEF, 0x4C, 0xA6, 0x7A, 0x19, 0x45, 0xDC, 
	0xFF, 0x1F, 0xB6, 0xE6, 0x51, 0x18, 0x92, 0x44, 0x5D, 0xF1, 
	0xC1, 0x7C, 0x58, 0x62, 0x03, 0xC2, 0xC8, 0x8A, 0x76, 0xE4, 
	0xA4, 0xA4, 0x48, 0xE6, 0x3D, 0xCA, 0x5B, 0xDA, 0xE3, 0x1D, 
	0x8D, 0x72, 0x72, 0x3A, 0x1E, 0xB7, 0x56, 0xC4, 0x92, 0xC2, 
	0x1A, 0x60, 0x29, 0xD0, 0x95, 0x03, 0x5D, 0xF9, 0xC1, 0xD9, 
	0xE7, 0xA0, 0xA0, 0x2C, 0x07, 0xCA, 0x1E, 0x39, 0x57, 0x8F, 
	0xA6, 0x33, 0xC1, 0x0A, 0xA7, 0x89, 0x57, 0x33, 0x0B, 0x9E, 
	0x6D, 0x78, 0xB6, 0xE1, 0xB9, 0x07, 0xCF, 0x43, 0x48, 0x14, 
	0x87, 0xFD, 0xA9, 0xDE, 0x97, 0xD6, 0xD8, 0xCE, 0x64, 0x64, 
	0xE8, 0x23, 0x78, 0x1A, 0x38, 0x93, 0x01, 0x5C, 0xFF, 0xE0, 
	0x69, 0x08, 0xF3, 0xF0, 0x68, 0xE2, 0xFB, 0x15, 0xD3, 0x70, 
	0x26, 0x10, 0xF9, 0x21, 0xAB, 0xC4, 0x0E, 0x42, 0xDF, 0x87, 
	0x8B, 0x2A, 0x5E, 0x97, 0x4C, 0x9B, 0x2D, 0x83, 0x07, 0xD8, 
	0x69, 0xB1, 0xB5, 0xB0, 0xB1, 0xCF, 0xA6, 0xF6, 0xC5, 0x94, 
	0x85, 0xBB, 0x01, 0x6D, 0x0F, 0x9F, 0x61, 0x73, 0x0F, 0xF6, 
	0x22, 0x05, 0x16, 0x90, 0x66, 0x03, 0x09, 0x6C, 0xBC, 0xC7, 
	0xC6, 0x6D, 0x46, 0x31, 0x90, 0x36, 0x18, 0xDA, 0x7C, 0xDC, 
	0x66, 0xE3, 0xD0, 0x85, 0x67, 0x46, 0x1C, 0x2C, 0x1A, 0xC1, 
	0x33, 0x60, 0xB1, 0x47, 0x40, 0x28, 0xAE, 0x19, 0x01, 0x7C, 
	0xB6, 0x11, 0x30, 0xDA, 0xBD, 0x1E, 0xF0, 0x89, 0x18, 0xFB, 
	0x90, 0x26, 0xC3, 0xCA, 0x1E, 0x60, 0xB4, 0x20, 0x4D, 0x1E, 
	0x8E, 0x86, 0xD0, 0x01, 0x94, 0xF0, 0x00, 0x64, 0x98, 0xD0, 
	0x41, 0x71, 0xF4, 0x21, 0x7B, 0xB6, 0x70, 0x0B, 0x20, 0xB5, 
	0x0D, 0x48, 0x9C, 0xFB, 0x16, 0x74, 0x46, 0x38, 0x03, 0x94, 
	0x21, 0x43, 0xBD, 0x7D, 0x64, 0x1E, 0x04, 0x86, 0x40, 0x41, 
	0x92, 0x38, 0x66, 0xC3, 0x73, 0x1F, 0xF9, 0x40, 0x1A, 0x6D, 
	0xC4, 0x00, 0x9D, 0x3E, 0xEB, 0x00, 0x9C, 0xDE, 0x70, 0x08, 
	0x83, 0xD8, 0x01, 0x8A, 0x47, 0xB6, 0xA9, 0xF7, 0x06, 0x80, 
	0x6E, 0x00, 0x7B, 0x00, 0x20, 0x60, 0x00, 0xDE, 0x07, 0x26, 
	0xEF, 0x58, 0x16, 0xA0, 0x1B, 0xC2, 0xCC, 0xBE, 0x90, 0x3A, 
	0x8E, 0x83, 0xD8, 0x51, 0xD0, 0x43, 0x54, 0x9D, 0x05, 0x5C, 
	0xC0, 0xF3, 0x08, 0x11, 0x42, 0x76, 0x6F, 0x21, 0xAD, 0x23, 
	0x58, 0x34, 0x1A, 0x5A, 0x7A, 0x7F, 0x34, 0x98, 0x3E, 0xB9, 
	0xD9, 0x5D, 0x94, 0x07, 0x73, 0x30, 0xAD, 0x00, 0x83, 0x4B, 
	0x7F, 0xAA, 0x3D, 0x86, 0x64, 0xE6, 0x2F, 0xE3, 0xDC, 0x81, 
	0x78, 0x92, 0x4C, 0xCA, 0xF1, 0xE9, 0xC4, 0x9C, 0x6A, 0x3C, 
	0x64, 0xB2, 0xD4, 0x46, 0xA5, 0x78, 0x79, 0xD6, 0x1F, 0xEF, 
	0x1D, 0xB1, 0xC4, 0x9C, 0x76, 0x2A, 0xCB, 0x8D, 0xE9, 0x9E, 
	0xA5, 0x3F, 0x14, 0xB3, 0x56, 0x6D, 0xD6, 0xC4, 0x59, 0x7A, 
	0xEF, 0xC0, 0x25, 0x84, 0x3E, 0xE0, 0x2F, 0x4F, 0x10, 0x6A, 
	0x10, 0xF4, 0x39, 0xCB, 0xDE, 0x9D, 0xDA, 0xD6, 0x27, 0x11, 
	0xF1, 0x64, 0x72, 0x82, 0x88, 0xB2, 0xC4, 0xFA, 0x31, 0x90, 
	0x28, 0xD2, 0x03, 0x89, 0x00, 0x9D, 0xD6, 0xC1, 0xEF, 0x59, 
	0x90, 0xEC, 0x09, 0x01, 0x60, 0x52, 0xC5, 0xF2, 0x5E, 0x91, 
	0x9B, 0x52, 0xCC, 0xB9, 0x30, 0x5C, 0x94, 0x72, 0x09, 0x7C, 
	0x40, 0x09, 0xB6, 0x5C, 0x5D, 0x39, 0x6E, 0x6D, 0x14, 0x47, 
	0xAB, 0x86, 0xAE, 0xD3, 0x33, 0xB4, 0x9A, 0x4C, 0xEA, 0x12, 
	0xEE, 0xD8, 0x6C, 0xC9, 0x0F, 0x05, 0x03, 0xA0, 0x36, 0xC8, 
	0x06, 0x20, 0xE0, 0x19, 0x03, 0xB4, 0xBB, 0x57, 0x90, 0x63, 
	0x7E, 0x73, 0x19, 0xD9, 0xE0, 0x44, 0xBC, 0xB5, 0x44, 0xDB, 
	0xDF, 0x9E, 0x8D, 0xBA, 0xD0, 0x7A, 0x15, 0x0E, 0xD8, 0x1B, 
	0x55, 0x4E, 0x23, 0x24, 0x48, 0x05, 0x51, 0xA6, 0x65, 0x37, 
	0x51, 0x61, 0x0A, 0xEC, 0x3D, 0xD1, 0xDA, 0xDB, 0x53, 0xC1, 
	0xF0, 0x48, 0x88, 0xDB, 0x75, 0x73, 0xEA, 0x01, 0xE7, 0x05, 
	0x21, 0x96, 0x5D, 0x12, 0x62, 0x34, 0x8A, 0x63, 0xB8, 0x3D, 
	0x62, 0x0B, 0x74, 0xF0, 0x1C, 0xDE, 0x7E, 0x67, 0x38, 0x2A, 
	0x45, 0xD0, 0xB7, 0x56, 0x22, 0xB0, 0x87, 0x4D, 0x98, 0xF7, 
	0x37, 0x60, 0xDE, 0xCA, 0x7E, 0xCD, 0xE1, 0x48, 0xC0, 0xD4, 
	0xFF, 0x0E, 0x14, 0x63, 0xF0, 0x0F, 0x40, 0xE9, 0xF5, 0x9B, 
	0xD8, 0x1B, 0xFD, 0x1D, 0xF6, 0xF6, 0x47, 0x0D, 0x20, 0x7B, 
	0x9B, 0x40, 0x36, 0xE8, 0xCA, 0xAE, 0xA8, 0xAA, 0x63, 0x96, 
	0x16, 0xB1, 0x72, 0x97, 0x5E, 0x69, 0x10, 0x1B, 0x98, 0x5F, 
	0x07, 0xDB, 0xB6, 0x0D, 0xF4, 0xB7, 0xED, 0x21, 0xCB, 0xE4, 
	0xDB, 0x9B, 0x02, 0x46, 0xA3, 0x44, 0xDA, 0x26, 0x58, 0x5B, 
	0x4D, 0x2A, 0xA3, 0x9F, 0x26, 0x18, 0x8B, 0xF1, 0x15, 0x72, 
	0xF7, 0xED, 0x86, 0x90, 0x62, 0x49, 0xEE, 0xBA, 0xFF, 0x4B, 
	0x38, 0xDA, 0x66, 0xC5, 0x25, 0x3B, 0x43, 0xA3, 0x01, 0x8D, 
	0x39, 0x5C, 0xA1, 0xE9, 0x37, 0x4A, 0xC8, 0xFC, 0x65, 0x9B, 
	0x61, 0xE2, 0xFA, 0x25, 0x09, 0x99, 0x35, 0x09, 0xA1, 0x30, 
	0xFE, 0x71, 0x11, 0x8D, 0xAA, 0x11, 0xCB, 0xB2, 0x37, 0xA0, 
	0xF9, 0xB1, 0x88, 0x7E, 0x22, 0x5C, 0x9B, 0x75, 0x27, 0xD8, 
	0x67, 0xE7, 0x89, 0x8D, 0x18, 0xED, 0xD2, 0x68, 0x57, 0x56, 
	0x3B, 0xEA, 0xFF, 0xBC, 0xF0, 0xAA, 0x21, 0xB1, 0x33, 0x1C, 
	0x74, 0xED, 0x35, 0x1C, 0x96, 0x1C, 0x0A, 0x7B, 0x4D, 0x4C, 
	0x0D, 0xB6, 0x67, 0xAA, 0x5F, 0x53, 0xD7, 0xD0, 0x5C, 0xC3, 
	0x87, 0xE9, 0x57, 0x29, 0x44, 0xEB, 0x17, 0x02, 0x5C, 0xBB, 
	0x67, 0x55, 0x7D, 0xAF, 0x33, 0xB2, 0xB6, 0x30, 0xAE, 0xED, 
	0x60, 0xB5, 0xAB, 0xB0, 0x9E, 0x8A, 0xBC, 0x3C, 0xF0, 0xC4, 
	0x92, 0x1E, 0x5C, 0x0A, 0x16, 0x70, 0x15, 0xC0, 0x1A, 0x86, 
	0x26, 0xEE, 0xA4, 0x65, 0x76, 0x1E, 0x15, 0xD9, 0x79, 0x91, 
	0xED, 0xE4, 0xE4, 0xBE, 0x26, 0xA2, 0x8A, 0xA5, 0xF5, 0x7B, 
	0xED, 0x81, 0xF1, 0x5F, 0x51, 0x07, 0x7E, 0x0A, 0x18, 0x90, 
	0x55, 0xB0, 0x5D, 0x1D, 0x3F, 0x09, 0xE6, 0x29, 0x85, 0xFB, 
	0xF0, 0x0D, 0xDC, 0x38, 0x90, 0x70, 0x51, 0x1F, 0xE3, 0x25, 
	0xB6, 0x59, 0x9A, 0xE4, 0x9D, 0x3B, 0x5E, 0x33, 0x85, 0xBB, 
	0x5E, 0x1A, 0x87, 0xC5, 0x20, 0x16, 0x27, 0x61, 0xA8, 0x67, 
	0xC3, 0x85, 0xCF, 0xA5, 0x5D, 0x84, 0x85, 0x2F, 0x5C, 0xE1, 
	0xFA, 0xE3, 0x05, 0x70, 0x29, 0x5D, 0x49, 0x87, 0x32, 0x06, 
	0x9F, 0xA7, 0x76, 0x3D, 0x55, 0x6C, 0xF7, 0x9F, 0x4D, 0x8C, 
	0x8E, 0x6A, 0xFD, 0x7A, 0x42, 0x04, 0x59, 0x53, 0x1B, 0x44, 
	0xBE, 0xCE, 0x8B, 0x20, 0x1B, 0x5F, 0xB5, 0x97, 0x95, 0xBF, 
	0xA2, 0xBC, 0x58, 0x2F, 0xFE, 0x0D, 0x16, 0x58, 0x47, 0x67, 
	0xDA, 0xED, 0xA4, 0x34, 0x24, 0x28, 0x25, 0xBE, 0x64, 0x9D, 
	0xE7, 0xBC, 0x6D, 0xD6, 0x58, 0x76, 0x0B, 0x96, 0x81, 0xE3, 
	0x30, 0xBA, 0x2D, 0xAB, 0x05, 0x70, 0x8B, 0x7E, 0x62, 0x57, 
	0x6E, 0xA2, 0x53, 0x4D, 0x5C, 0xCD, 0x79, 0xB1, 0xA8, 0x07, 
	0xD7, 0x6A, 0xAC, 0x32, 0x48, 0xD5, 0xA1, 0xDD, 0x03, 0x2C, 
	0x1F, 0x28, 0xEC, 0x7E, 0xE8, 0xAD, 0x38, 0x80, 0x94, 0x66, 
	0x71, 0xEF, 0x4A, 0xCA, 0x71, 0x12, 0x56, 0x1C, 0x72, 0x6F, 
	0x09, 0xCD, 0xA3, 0xC0, 0x8F, 0x3B, 0x7E, 0x1C, 0x5D, 0x27, 
	0x4E, 0x9E, 0x2E, 0x5C, 0xF5, 0xF0, 0xC5, 0x6E, 0xBB, 0x05, 
	0xF4, 0x69, 0xED, 0x5D, 0x65, 0x27, 0xB9, 0xCA, 0x16, 0xAE, 
	0x72, 0xB0, 0x87, 0x60, 0x0F, 0x95, 0x03, 0x20, 0x4C, 0x89, 
	0x42, 0x4F, 0x8D, 0xAF, 0xE2, 0xF0, 0x0B, 0xAF, 0xDE, 0x2A, 
	0xAC, 0x40, 0x82, 0x43, 0xEA, 0xE1, 0x6E, 0x9B, 0xD5, 0xD6, 
	0x4A, 0x9B, 0xD4, 0xDA, 0xEA, 0xC1, 0x1E, 0xEC, 0x39, 0x54, 
	0xF5, 0x34, 0x89, 0xA3, 0x84, 0x70, 0x33, 0xCC, 0xBC, 0xB5, 
	0x0A, 0x20, 0x00, 0xC4, 0x72, 0x9A, 0xA8, 0xFF, 0x15, 0x3D, 
	0x5E, 0x32, 0xE0, 0xFA, 0xE7, 0x05, 0x83, 0x12, 0x74, 0x51, 
	0x19, 0x9C, 0xC5, 0xA9, 0x9F, 0x3B, 0xEC, 0xBD, 0x9B, 0xFA, 
	0x24, 0x4A, 0x13, 0x99, 0xA6, 0x67, 0xD5, 0x62, 0xB5, 0x9A, 
	0x26, 0xDF, 0xC8, 0xC3, 0x12, 0x5F, 0x14, 0xB0, 0x8B, 0xEC, 
	0x2E, 0x63, 0x80, 0x15, 0x28, 0x76, 0x35, 0x49, 0x7E, 0x8C, 
	0xFC, 0x7C, 0x1E, 0x65, 0x5D, 0x86, 0x4E, 0x73, 0x55, 0xED, 
	0x09, 0x40, 0x52, 0xDD, 0x5F, 0xDD, 0x85, 0x63, 0x70, 0xAE, 
	0xF8, 0xA0, 0x52, 0x87, 0x73, 0xE3, 0xC2, 0xC3, 0x7C, 0x59, 
	0x81, 0x65, 0xED, 0x68, 0x76, 0xAA, 0xEA, 0xAC, 0xCE, 0x89, 
	0x95, 0xC3, 0x9C, 0x55, 0x0E, 0x63, 0x4E, 0x2C, 0x42, 0xE6, 
	0x57, 0xF1, 0x5C, 0x8F, 0x05, 0x2E, 0x06, 0xE1, 0x8A, 0xCA, 
	0x00, 0x82, 0x98, 0xB2, 0x42, 0x89, 0x7C, 0x17, 0x67, 0x14, 
	0x80, 0xB3, 0x87, 0x1C, 0x65, 0xC6, 0xEA, 0x07, 0xAB, 0x82, 
	0xEA, 0xF2, 0x46, 0x5D, 0x55, 0x53, 0xA1, 0xF3, 0xA4, 0xE9, 
	0x69, 0xDD, 0xBA, 0xB2, 0xFC, 0x25, 0x0A, 0x0D, 0x39, 0x43, 
	0xAE, 0x4C, 0xE3, 0x30, 0x66, 0xAC, 0x00, 0x19, 0xA1, 0x9E, 
	0x90, 0x3B, 0xE5, 0xFD, 0x02, 0x0B, 0x03, 0x2D, 0x5E, 0x42, 
	0xCC, 0x1C, 0x05, 0xE8, 0xD6, 0x63, 0xDD, 0xD0, 0x2B, 0xDC, 
	0x7B, 0x5E, 0x7C, 0x64, 0x3A, 0x86, 0xD6, 0x50, 0xBA, 0x5C, 
	0xD5, 0x88, 0xD3, 0xEA, 0x1E, 0x56, 0xF1, 0x22, 0x7A, 0x28, 
	0xDA, 0x14, 0xD8, 0x58, 0xD3, 0x58, 0x30, 0xC7, 0x77, 0xA0, 
	0xCC, 0xCF, 0x0A, 0x28, 0x5C, 0x79, 0x40, 0xF6, 0x2E, 0xC4, 
	0xC1, 0x8A, 0x9A, 0x5C, 0x59, 0x34, 0xD1, 0x02, 0x60, 0x61, 
	0xAD, 0xB3, 0xF4, 0x14, 0x59, 0x96, 0x39, 0x8D, 0x0B, 0xAE, 
	0x65, 0xDF, 0x51, 0xC5, 0xD7, 0x6E, 0x31, 0xA1, 0xCA, 0xF9, 
	0x65, 0xF9, 0x15, 0x84, 0xCA, 0x29, 0xF4, 0xD7, 0xCB, 0xCA, 
	0x87, 0xE7, 0x97, 0x0E, 0xB8, 0xC6, 0xD5, 0x21, 0xAF, 0x30, 
	0xEB, 0x28, 0xC2, 0xFE, 0x4A, 0x82, 0x0D, 0x75, 0x6E, 0x44, 
	0x7D, 0x7E, 0x89, 0xDA, 0x17, 0xAA, 0x91, 0x06, 0x2A, 0x95, 
	0x6E, 0x5B, 0x2E, 0x74, 0xE3, 0xA2, 0xD3, 0xD9, 0x35, 0x84, 
	0xA9, 0x49, 0x3C, 0x5D, 0xAB, 0x6F, 0xF7, 0x0E, 0xE3, 0x23, 
	0x55, 0xE9, 0x2A, 0xC0, 0x99, 0xEA, 0xD6, 0x8A, 0xF0, 0x45, 
	0xF5, 0x5B, 0xFC, 0x1C, 0x8E, 0x97, 0x57, 0x09, 0x7E, 0x8C, 
	0xE0, 0x67, 0xDF, 0x9C, 0x9F, 0x22, 0x3C, 0x63, 0x1B, 0x25, 
	0xC2, 0xA5, 0x81, 0x1F, 0x13, 0x6E, 0x6E, 0x47, 0x38, 0x6A, 
	0x90, 0x57, 0x96, 0xF8, 0x37, 0xB3, 0x72, 0x71, 0x09, 0xE2, 
	0x1C, 0x1F, 0x44, 0xEF, 0x37, 0xA6, 0x87, 0x1E, 0x18, 0x97, 
	0x3C, 0x70, 0xE0, 0x99, 0xFD, 0x8A, 0x07, 0xB2, 0xE8, 0x28, 
	0xAB, 0x77, 0xB5, 0x1A, 0x4E, 0x3B, 0xA1, 0x52, 0x39, 0x9C, 
	0xCA, 0xEC, 0xC2, 0xDA, 0x57, 0x89, 0x14, 0x8F, 0x56, 0x7D, 
	0x1E, 0x91, 0x82, 0x39, 0x09, 0xBE, 0x5D, 0xA5, 0xF7, 0x18, 
	0xD6, 0x44, 0xE1, 0x93, 0x5B, 0x26, 0x2C, 0x3C, 0xBF, 0xBC, 
	0x2A, 0x03, 0xCB, 0x5A, 0x9D, 0x8E, 0xC7, 0x16, 0xB6, 0x9D, 
	0x84, 0x47, 0xBB, 0xA2, 0x18, 0xB9, 0xEB, 0xEC, 0xF2, 0xFA, 
	0xDD, 0x2E, 0x58, 0x32, 0xC6, 0x85, 0x62, 0x05, 0x12, 0x8D, 
	0x02, 0xC4, 0xBA, 0x6E, 0xF9, 0x88, 0x85, 0x0D, 0x99, 0xFE, 
	0xDB, 0xBA, 0x57, 0xAF, 0x88, 0x28, 0x74, 0x13, 0x46, 0x90, 
	0x1C, 0xF8, 0x0F, 0x8E, 0x12, 0xB1, 0x28, 0xDC, 0xB9, 0x8A, 
	0xD3, 0xE0, 0x9B, 0xAB, 0xAC, 0x08, 0x43, 0xCF, 0x6E, 0x6D, 
	0x40, 0x76, 0xA4, 0x66, 0xF3, 0xF4, 0x0E, 0xB4, 0x24, 0x6A, 
	0x8C, 0x10, 0xD4, 0x19, 0x95, 0x5C, 0x25, 0x7C, 0x19, 0xEA, 
	0xC7, 0xF4, 0x24, 0x19, 0x5B, 0x53, 0x8D, 0xA9, 0xB4, 0x62, 
	0x8B, 0xCA, 0x9A, 0xA9, 0xDD, 0xAE, 0x9B, 0x1A, 0xA3, 0xFE, 
	0x4B, 0x51, 0x6D, 0x8E, 0x57, 0x1A, 0xA8, 0x8C, 0x6E, 0x36, 
	0xBA, 0x15, 0xE9, 0x71, 0xDB, 0x64, 0x56, 0x77, 0xBB, 0xD1, 
	0xEA, 0x78, 0x19, 0xA8, 0x4A, 0x63, 0x6B, 0x4C, 0x68, 0xE4, 
	0xC7, 0x9A, 0xCA, 0xCF, 0xDC, 0x5B, 0xB9, 0x3A, 0xBD, 0xAA, 
	0x9A, 0x27, 0x45, 0x42, 0xB5, 0xA1, 0x4A, 0x9E, 0x30, 0xF9, 
	0xD0, 0xEA, 0xBB, 0x21, 0xE3, 0x37, 0x0F, 0xF6, 0xD1, 0xAA, 
	0x7F, 0xCE, 0xD1, 0x05, 0x5D, 0x9E, 0xCC, 0x35, 0x04, 0x72, 
	0x12, 0xC7, 0xD7, 0x51, 0xF0, 0xA5, 0x7C, 0xE1, 0xC4, 0x7E, 
	0x93, 0xC2, 0x0B, 0x37, 0xCC, 0x16, 0xB1, 0xD3, 0x51, 0xB1, 
	0xE6, 0xCB, 0x66, 0xA7, 0x13, 0x36, 0x8D, 0x4D, 0x82, 0x8D, 
	0x31, 0xF5, 0x5A, 0xCF, 0x4C, 0xEE, 0x98, 0xB6, 0xF6, 0x5D, 
	0x3A, 0x09, 0x0F, 0x8D, 0x23, 0x73, 0x00, 0x31, 0xDE, 0x55, 
	0x8B, 0x73, 0x2B, 0x28, 0x5E, 0x25, 0x49, 0xC7, 0x84, 0x8F, 
	0x9F, 0xE4, 0x18, 0xF0, 0xF7, 0xD9, 0xF7, 0x12, 0x09, 0xF4, 
	0xCC, 0x41, 0x65, 0x00, 0xCD, 0xCC, 0x70, 0x4C, 0xAD, 0x01, 
	0x66, 0x4A, 0x95, 0x56, 0x86, 0x5F, 0x5F, 0xE1, 0x77, 0x30, 
	0xBF, 0x08, 0x9A, 0x9D, 0x4E, 0xEC, 0xF0, 0x8C, 0x9A, 0x65, 
	0x0C, 0xFA, 0xDB, 0x2C, 0xE2, 0x86, 0xC9, 0x42, 0x08, 0x91, 
	0xE6, 0x32, 0x78, 0x29, 0x23, 0x16, 0xF3, 0xB1, 0xAE, 0x1F, 
	0x86, 0x2D, 0x99, 0x7E, 0x38, 0xBF, 0x54, 0xE9, 0x95, 0x91, 
	0xEF, 0x4D, 0x40, 0x40, 0x90, 0xBE, 0x80, 0x23, 0x64, 0xB5, 
	0x40, 0x97, 0x81, 0x53, 0x54, 0xB3, 0x0C, 0xF1, 0x7F, 0x02, 
	0x26, 0xD9, 0x54, 0xCE, 0x34, 0xB8, 0xE7, 0x89, 0x09, 0x08, 
	0xAD, 0xA8, 0x2F, 0x4C, 0x8C, 0x08, 0x3E, 0x7D, 0xFF, 0x6E, 
	0x30, 0x47, 0xAC, 0x4C, 0x73, 0x6B, 0x0D, 0xBD, 0x1F, 0x0A, 
	0xAF, 0xFA, 0xB2, 0x88, 0x49, 0x4F, 0x2B, 0xFD, 0x3A, 0x63, 
	0x98, 0xAA, 0xF3, 0xE6, 0x54, 0x1C, 0xFF, 0x6E, 0x88, 0xAF, 
	0x77, 0xBD, 0x89, 0xBC, 0x56, 0x8F, 0xA7, 0x4C, 0xA3, 0x91, 
	0xAC, 0xD1, 0xD5, 0x02, 0xB8, 0xE8, 0xA8, 0x18, 0x79, 0xAA, 
	0xD4, 0x42, 0x78, 0x96, 0x61, 0xF0, 0x6C, 0x09, 0x14, 0x1F, 
	0x82, 0x0A, 0x43, 0xFA, 0x29, 0x1E, 0x7F, 0xE6, 0x1E, 0xA8, 
	0xFB, 0x2C, 0x12, 0x62, 0x61, 0x59, 0x8F, 0x36, 0x27, 0x0F, 
	0x6C, 0x4B, 0xED, 0x8D, 0x54, 0xC2, 0xDE, 0x48, 0x69, 0xB2, 
	0x63, 0xE3, 0xA2, 0x06, 0xC7, 0x6E, 0x56, 0xBF, 0xA6, 0x07, 
	0x1E, 0xED, 0x72, 0xA5, 0x67, 0x13, 0xDA, 0xE5, 0xE6, 0x44, 
	0xC2, 0xF3, 0x24, 0x24, 0xF7, 0x53, 0xEE, 0x31, 0xC5, 0x7D, 
	0xEC, 0x0B, 0xA0, 0x7A, 0xF6, 0x4D, 0x52, 0x39, 0x5C, 0xBC, 
	0x99, 0x91, 0xE5, 0x2B, 0x4F, 0x42, 0x77, 0x6D, 0x1E, 0xFD, 
	0x18, 0x54, 0x16, 0xA0, 0xE2, 0x5B, 0x25, 0xC9, 0x4D, 0x41, 
	0x41, 0xDB, 0xD9, 0x79, 0x7E, 0xBE, 0xEA, 0xE8, 0x7A, 0x5D, 
	0xCB, 0x01, 0xFC, 0xB8, 0xDC, 0x85, 0x36, 0xC4, 0xBC, 0x56, 
	0x02, 0x97, 0x06, 0x70, 0x81, 0x9D, 0x9D, 0xDF, 0xA2, 0x55, 
	0x8C, 0xDB, 0xD9, 0x61, 0x06, 0xB0, 0xFD, 0xEB, 0x42, 0x06, 
	0xE6, 0x47, 0xAF, 0x0C, 0xF5, 0xD5, 0x8B, 0x42, 0xBD, 0x62, 
	0x14, 0x28, 0x09, 0x1D, 0x69, 0xAD, 0x6B, 0x97, 0x2F, 0x80, 
	0xB8, 0x05, 0x4E, 0xFB, 0x28, 0xBF, 0xE1, 0x5C, 0x7B, 0xCB, 
	0x4A, 0xAB, 0x89, 0x83, 0x94, 0x9D, 0x6C, 0x72, 0x5A, 0x70, 
	0xC8, 0xA0, 0xEA, 0x25, 0xFC, 0xF5, 0x65, 0xE2, 0x59, 0x6E, 
	0x22, 0x39, 0x31, 0x5C, 0x74, 0x8B, 0x6D, 0xC9, 0x9A, 0x1F, 
	0x47, 0x28, 0x69, 0x4E, 0x5A, 0xDC, 0x1C, 0xA5, 0x80, 0xD2, 
	0x9A, 0xD6, 0x68, 0x3D, 0x56, 0x6D, 0x5E, 0xF2, 0xFC, 0x99, 
	0x40, 0x57, 0xD1, 0xDF, 0x5B, 0x45, 0x7D, 0xB7, 0xE9, 0x15, 
	0x7D, 0x71, 0xCB, 0x8A, 0x79, 0xFA, 0x11, 0x7A, 0xC7, 0x94, 
	0xFA, 0x0F, 0xDD, 0x28, 0x63, 0xED, 0x3A, 0x47, 0x70, 0xED, 
	0x08, 0x8F, 0xEA, 0xA3, 0x20, 0x22, 0xA7, 0x3E, 0xA6, 0xDF, 
	0x7A, 0x9D, 0xB4, 0x63, 0xE2, 0xC1, 0x89, 0xF7, 0x66, 0xFC, 
	0x44, 0xD8, 0xF3, 0xD0, 0x04, 0xD2, 0x99, 0x92, 0x96, 0x81, 
	0xF1, 0x0C, 0x74, 0x70, 0x76, 0x50, 0xDF, 0x5B, 0x88, 0xF5, 
	0x8C, 0xE7, 0x15, 0x71, 0x2D, 0xE0, 0x54, 0x71, 0x9F, 0x4D, 
	0xF5, 0xB3, 0x1F, 0x9D, 0x24, 0xB4, 0xD6, 0x43, 0xE7, 0xF3, 
	0xCE, 0xC4, 0x3D, 0x07, 0xF3, 0x06, 0xA6, 0xA8, 0xCF, 0x1E, 
	0x44, 0xBD, 0x35, 0x62, 0xD7, 0x10, 0x6E, 0xA0, 0xB6, 0x63, 
	0xF2, 0x54, 0x6B, 0xDB, 0xC5, 0xEB, 0x52, 0xDC, 0xBC, 0x96, 
	0x45, 0x56, 0xC8, 0x71, 0xF4, 0x05, 0xD6, 0x82, 0x66, 0x2D, 
	0xE3, 0x30, 0xDD, 0xD9, 0x11, 0xDF, 0x8E, 0x4E, 0x6E, 0xA7, 
	0x35, 0x71, 0xAE, 0x26, 0x9E, 0x13, 0xE4, 0xE7, 0xF6, 0x6A, 
	0xDD, 0xDF, 0x16, 0x22, 0x10, 0x76, 0xD6, 0x66, 0xCA, 0x4E, 
	0x0F, 0x8D, 0xEF, 0xDF, 0xC3, 0x06, 0x49, 0x40, 0x5A, 0xBF, 
	0x36, 0x66, 0xCA, 0xA4, 0x37, 0xDB, 0x15, 0x32, 0xE4, 0xB5, 
	0x1A, 0xE6, 0xCC, 0xA9, 0x93, 0x6A, 0x1B, 0x38, 0x3B, 0xFB, 
	0xA7, 0xB8, 0x09, 0x25, 0xFA, 0xD2, 0x43, 0xCF, 0x38, 0xB2, 
	0x1C, 0x73, 0xB3, 0xC1, 0x82, 0xB9, 0x6F, 0x6B, 0xB2, 0x8B, 
	0x5F, 0xA2, 0x6F, 0x51, 0xD0, 0xD7, 0x6E, 0x3F, 0x3D, 0xB1, 
	0xF2, 0xE9, 0x93, 0xFC, 0x6D, 0x53, 0xF1, 0xA6, 0xFF, 0xB1, 
	0xA8, 0x29, 0xB0, 0x0F, 0x90, 0xE4, 0xE8, 0x77, 0x95, 0x86, 
	0x0F, 0x8F, 0xAC, 0x74, 0x34, 0xF3, 0x6F, 0xA2, 0xF8, 0xC1, 
	0x39, 0xC6, 0xF4, 0x58, 0x3F, 0x83, 0x58, 0x43, 0xB0, 0x76, 
	0xA4, 0x67, 0x7E, 0x92, 0x75, 0x32, 0x48, 0x9A, 0x67, 0x6E, 
	0xE7, 0x8E, 0x5C, 0x7D, 0x8B, 0xF2, 0xCE, 0x82, 0x62, 0x0D, 
	0x2C, 0xC0, 0x2F, 0x88, 0x3B, 0x7E, 0xF8, 0x75, 0x99, 0xE5, 
	0x0E, 0xB9, 0xF7, 0x83, 0xDC, 0x7D, 0xC2, 0x32, 0x5A, 0x25, 
	0xFF, 0x9D, 0xF7, 0x94, 0x47, 0xE5, 0x8A, 0x95, 0xCB, 0x1C, 
	0xE5, 0x45, 0x8F, 0xFD, 0x51, 0xB2, 0x34, 0x8E, 0x42, 0xC5, 
	0x84, 0xAC, 0x5E, 0x59, 0x40, 0x3E, 0x05, 0xCE, 0xE5, 0xD8, 
	0xD8, 0xB9, 0xF1, 0xE9, 0x75, 0x94, 0x38, 0x8A, 0x65, 0x2B, 
	0x86, 0x02, 0xFF, 0x5C, 0x05, 0xBF, 0x11, 0xBF, 0xA6, 0xE9, 
	0x32, 0x09, 0x39, 0x3A, 0xE7, 0xC5, 0xD5, 0x3E, 0xFE, 0x75, 
	0x05, 0xCC, 0x0E, 0xF5, 0xC3, 0x68, 0x99, 0xF1, 0xED, 0xEB, 
	0xD8, 0xBB, 0xF1, 0x95, 0xF2, 0x58, 0x60, 0x07, 0x7C, 0x02, 
	0x33, 0x7E, 0xDC, 0x07, 0x7F, 0xEA, 0x40, 0x7A, 0x08, 0x64, 
	0x0D, 0xA3, 0xF2, 0x82, 0xB0, 0x3F, 0x2B, 0x5A, 0x81, 0x34, 
	0xF6, 0x77, 0x45, 0x70, 0x31, 0xB0, 0xE1, 0x22, 0xC6, 0x2B, 
	0xAB, 0xAC, 0x04, 0x17, 0x10, 0xFC, 0xDC, 0x11, 0x76, 0x46, 
	0x09, 0x2F, 0x2C, 0xC2, 0x66, 0xBC, 0xDE, 0x34, 0xD0, 0x8E, 
	0xD7, 0x6B, 0x14, 0xDE, 0x9A, 0x08, 0xFC, 0x30, 0x98, 0x85, 
	0xA3, 0x46, 0x7E, 0x67, 0xA7, 0xB0, 0x83, 0xD7, 0xCC, 0x62, 
	0x32, 0xCB, 0xDD, 0x95, 0xE8, 0xF7, 0xD9, 0x9F, 0x26, 0xD1, 
	0x5B, 0x8D, 0x6C, 0x97, 0x5C, 0x37, 0xC8, 0xA8, 0x89, 0xD8, 
	0x98, 0x02, 0xE6, 0x20, 0x26, 0x3E, 0x15, 0x98, 0x9F, 0x94, 
	0x46, 0xF2, 0xE6, 0x7D, 0x58, 0x57, 0x2A, 0x9A, 0x41, 0x5B, 
	0x5F, 0xF8, 0x02, 0x4D, 0xB8, 0x5C, 0xD7, 0xC9, 0xD3, 0x05, 
	0xA8, 0x8F, 0x7D, 0x1D, 0xD8, 0xB0, 0x78, 0x6E, 0x21, 0xCF, 
	0x65, 0x2D, 0x54, 0xE9, 0xE3, 0x3A, 0x59, 0xE6, 0x4A, 0x29, 
	0xF4, 0x02, 0xAD, 0x01, 0xF6, 0x05, 0xF0, 0xD0, 0xC2, 0x0A, 
	0x29, 0x98, 0x76, 0xB3, 0x18, 0x0C, 0xD2, 0x0F, 0xAF, 0xFA, 
	0xAE, 0xC2, 0xBB, 0x77, 0xF8, 0xDF, 0xA7, 0xB6, 0x35, 0xBE, 
	0xEC, 0x64, 0x99, 0x2B, 0x8F, 0x0B, 0xF1, 0x3F, 0x63, 0x1C, 
	0x65, 0x16, 0xDD, 0x93, 0x10, 0x37, 0xE3, 0x57, 0xC9, 0x8E, 
	0xC2, 0xC8, 0x64, 0x95, 0x4D, 0xF1, 0xDC, 0x60, 0x7A, 0xFD, 
	0xD3, 0xE3, 0xD7, 0xB6, 0x51, 0x60, 0x57, 0x04, 0xFA, 0xD2, 
	0x10, 0x4D, 0xD8, 0xA7, 0x70, 0xCA, 0x9B, 0xF8, 0x65, 0x63, 
	0x21, 0xFE, 0xC7, 0x48, 0x9F, 0x53, 0x90, 0xA4, 0x09, 0x6C, 
	0xDF, 0x60, 0xA5, 0x85, 0x74, 0xFA, 0x00, 0x93, 0x29, 0x46, 
	0x7C, 0xA3, 0xAB, 0x88, 0x6F, 0x74, 0xEB, 0x6C, 0xE3, 0xC2, 
	0x26, 0xBB, 0xC5, 0x2F, 0xE9, 0x1E, 0xA5, 0xDA, 0x03, 0xAF, 
	0x2B, 0x80, 0xE6, 0xBA, 0x24, 0xCC, 0x1F, 0xA5, 0x82, 0xAE, 
	0xBB, 0x62, 0x18, 0x58, 0x9D, 0xCD, 0x66, 0x6E, 0xC1, 0x98, 
	0xA1, 0x58, 0xA0, 0x21, 0xCB, 0x15, 0x24, 0x15, 0xDD, 0x26, 
	0x77, 0xE5, 0xF6, 0x2D, 0xF9, 0x36, 0x37, 0xF4, 0x26, 0x55, 
	0x0A, 0xBF, 0x69, 0x72, 0x9B, 0x85, 0xF2, 0x58, 0x88, 0xBC, 
	0xD8, 0x2F, 0x59, 0x94, 0xD9, 0xEC, 0xA1, 0xFF, 0x7D, 0x43, 
	0xC2, 0xC8, 0x57, 0x58, 0x34, 0x04, 0x13, 0x14, 0xFA, 0x2E, 
	0xA5, 0x8B, 0xC2, 0x56, 0x7E, 0x8B, 0x6E, 0x16, 0x29, 0xCD, 
	0xFD, 0x04, 0x82, 0xE3, 0x93, 0xCA, 0xEF, 0xA8, 0xF8, 0x49, 
	0x5A, 0xC7, 0xE4, 0x9F, 0xA6, 0x61, 0x3E, 0xC4, 0x3E, 0xCB, 
	0x72, 0xFF, 0x03, 0x8F, 0xFE, 0xF6, 0xCA, 0xEC, 0x3E, 0x00, 
	0x00, 
};

	// Default Controller Configuration (len=55)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x25, 0x05, 0x04, 0x41, 0x2A, 0x01, 0x00, 0x05, 0x04, 
	0x41, 0x2A, 0x01, 0x01, 0x05, 0x04, 0x41, 0x2A, 0x02, 0x00, 
	0x05, 0x04, 0x41, 0x2A, 0x02, 0x01, 0x05, 0x04, 0x41, 0x2A, 
	0x03, 0x00, 0x05, 0x04, 0x41, 0x2A, 0x03, 0x01, 0xFF, 0xC0, 
	0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x01, 0xC0, 
	0xA8, 0x0A, 0xF0, 0x00, 0x00, 
};

#endif


SkaarhojGPIO2x8 GPIOboard;