public static boolean CheckTransitive(int array[][])
{

	boolean check = true;

	while (check == true)
	{

		for (int i = 0; i < array.length; i++)
		{
			for ( int j = 0; j < array[i].length; j++)
			{
				for ( int k = 0; k < array[j].length; k++)
				{

					if (array[i][j] == array[j][k]) {
						if (array[i][j] != array[i][k]) {
							check = false;
							break;

						}

					}

				} break;
			} break;

		} break;
	}
	if (check == true) {
		return true;

	} else {
		return false;
	}


}