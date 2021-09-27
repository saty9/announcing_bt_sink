/*This is tone file*/

const char* tone_uri[] = {
   "flash://tone/0_ready_to_connect.mp3",
};

int get_tone_uri_num()
{
    return sizeof(tone_uri) / sizeof(char *) - 1;
}
