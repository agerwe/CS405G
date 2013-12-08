#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		fstream file;
		file.open(argv[1]);

		string line;

		if (file.is_open())
		{
			while (getline(file, line))
			{
				stringstream ss(line);
				string newLine;
				ss >> newLine;

				while (ss)
				{
					string tableName="";

					if (newLine == "CREATE")
					{
						ss >> newLine;

						if (newLine == "TABLE")
						{
							ss >> newLine;

							tableName = newLine;

							if (tableName == "TABLE")
							{
								cout << "Table was not created. Please provide table name." << endl;
							}
							else
							{
								// Create the table
								cout << tableName << " created!" << endl;
							}
						}
						else
						{
							cout << "Invalid SQL statement!" << endl;
						}
					}
					else if (newLine == "SELECT")
					{
						ss >> newLine;

						if (newLine == "*")
						{
							ss >> newLine;

							if (newLine == "FROM")
							{
								ss >> newLine;

								tableName = newLine;

								if (tableName == "FROM")
								{
									cout << "Invalid SQL statement! Must choose a table to select from." << endl;
								}
								else
								{
									cout << "From table " << tableName << "." << endl;

									ss >> newLine;

									if (newLine == "WHERE")
									{
										ss >> newLine;

										string keyName;

										if (newLine == "primary_key")
										{
											if (ss.peek() == EOF)
											{
												cout << "Must provide a key name!" << endl;
											}
											else
											{

												ss >> newLine;

												keyName = newLine;

												cout << keyName << endl;

												if (keyName == "=")
												{
													ss >> newLine;

													keyName = newLine;
												}
												else
												{
													keyName.erase(0,1);
												}
											}
										}
										else if (newLine == "primary_key=")
										{
											ss >> newLine;

											keyName = newLine;
										}
										else if (newLine.find("="))
										{
											newLine.erase(0,12);

											keyName = newLine;
										}
										else
										{
											cout << "Invalid SQL statement!" << endl;
										}

										cout << "This is the keyName: " << keyName << endl;
									}
									else
									{
										// No where statement return all values
									}
								}
							}
							else
							{
								cout << "Invalid SQL statement! Must use FROM to select the table." << endl;
							}
						}
						else
						{
							cout << "Invalid SQL statement! Must use '*' to select all elements." << endl;
						}

						//cout << "SELECT" << endl;
					}


					ss >> newLine;
				}
			}
		}
		else
		{
			cout << "File would not open!" << endl;
		}
	}
}
