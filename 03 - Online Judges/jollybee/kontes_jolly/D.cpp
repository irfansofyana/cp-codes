for (int i=0; i<n; i++) {
	priority_queue <int> smaller, bigger;
	for (int j=i; j<n; j++) {
		smaller.push (element[j]);
		maintain_priority_queue ();	
		median[i][j] = smaller.top();
	}	
}